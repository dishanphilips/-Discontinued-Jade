
#include "../../../core/include/jadecore.h";

#include "rpc_handler.h"

namespace JadeServer
{
	RpcHandler::RpcHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue) :
		service_(service),
		completion_queue_(completion_queue),
		command_responder_(&context_),
		status_(RpcHandlerStatus::Create)
	{
	}

	RpcHandlerStatus RpcHandler::GetStatus()
	{
		return status_;
	}

	void RpcHandler::Create()
	{
		// Set the status to process
		status_ = RpcHandlerStatus::Process;

		// Initialize the handler
		service_->RequestHandle(&context_, &command_responder_, completion_queue_, completion_queue_, this);
	}

	void RpcHandler::Process()
	{
		// Spawn a new handler and add it to the completion queue
		RpcHandler* newHandler = new RpcHandler(service_, completion_queue_);
		newHandler->Create();

		// Execute the current handler
		command_response_.set_operation(command_request_.operation());
		command_response_.set_response(JadeCore::CommandExecutor::HandleCommand(command_request_.operation(), command_request_.request()));
		
		// Finalize the task
		if (ok_)
		{
			command_responder_.WriteAndFinish(command_response_, {}, grpc::Status::OK, this);
		}
		else
		{
			command_responder_.WriteAndFinish(command_response_, {}, grpc::Status::CANCELLED, this);
		}
		
		// Mark it as finished
		status_ = RpcHandlerStatus::Finish;
	}

	void RpcHandler::Dispose()
	{
		GPR_ASSERT(status_ == RpcHandlerStatus::Finish);
		delete this;
	}
}
