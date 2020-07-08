#include "jadecore.h";

#include "rpc/rpc_handler.h"

namespace JadeServer
{
	RpcHandler::RpcHandler(
		uint64_t id) :
		id_(id),
		status_(RpcStatus::Connecting),
		server_context_(std::make_shared<grpc::ServerContext>()),
		command_stream_(server_context_.get()),
		command_queue_(),
		handler_lock_(std::make_shared<std::mutex>())
	{
	}

	RpcStatus RpcHandler::GetStatus() const
	{
		return status_;
	}

	std::shared_ptr<grpc::ServerContext> RpcHandler::GetServerContext() const
	{
		return server_context_;
	}

	std::shared_ptr<std::mutex> RpcHandler::GetHandlerLock() const
	{
		return handler_lock_;
	}

	bool RpcHandler::Create(JadeCore::RpcBase::AsyncService &service, grpc::ServerCompletionQueue* rpc_queue, grpc::ServerCompletionQueue* notification_queue)
	{
		// Initialize the handler
		service.RequestHandle(
			server_context_.get(), 
			&command_stream_, 
			rpc_queue,
			notification_queue,
			reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Initialized));

		return true;
	}

	void RpcHandler::Process(RpcEvent event)
	{
		switch (event)
		{
			case RpcEvent::Initialized:
				command_stream_.Read(&command_,reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Read));
				status_ = RpcStatus::WriteReady;
				return;
			case RpcEvent::Read:
				command_stream_.Read(&command_,reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Read));
				//this->SendCommand();
				return;
			case RpcEvent::Write:
				if (!command_queue_.empty()) 
				{
					// Update the status
					status_ = RpcStatus::WriteComplete;

					// Write the first command on the command queue
					command_stream_.Write(
						*command_queue_.front(),
						reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Write)
					);

					// Pop the command out of the front of the queue
					command_queue_.pop_front();
				}
				else 
				{
					status_ = RpcStatus::WriteReady;
				}
				return;
			default:
				return;
		}
	}

	void RpcHandler::Complete()
	{
		if (status_ == RpcStatus::Connecting)
		{
			return;
		}

		// Finish the stream
		command_stream_.Finish(
			grpc::Status::CANCELLED,
			reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Finished)
		);
	}
	
	void RpcHandler::SendClientCommand(int operation, grpc::protobuf::Message* command)
	{
		// Check if there is anything to be written
		if (status_ != RpcStatus::WriteReady && status_ != RpcStatus::WriteComplete)
		{
			return;
		}
		else
		{
			auto command_request = std::make_shared<JadeCore::Command>();
			command_request->set_operation(operation);
			command_request->set_request(command->SerializeAsString());

			// Check if the handler is ready to write
			if(status_ == RpcStatus::WriteReady)
			{
				status_ = RpcStatus::WriteComplete;
				command_stream_.Write(
					*command_request, 
					reinterpret_cast<void*>(id_ << GRPC_EVENT_BIT_LENGTH | RpcEvent::Write)
				);
			}
			else
			{
				command_queue_.emplace_back(command_request);
			}
		}
	}
}
