#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_

#include <deque>

#include <grpcpp/impl/codegen/completion_queue_impl.h>

#include "../../../core/include/jadecore.h"

using std::string;
using std::deque;
using std::mutex;
using std::unique_ptr;
using std::shared_ptr;
using google::protobuf::Message;
using grpc::ServerCompletionQueue;
using grpc_impl::ServerContext;
using grpc_impl::ServerAsyncReaderWriter;
using JadeCore::RpcBase;
using JadeCore::Command;

namespace JadeServer
{	
	class RpcHandler
	{
	private:

		/**
		 * \brief A session id used to identify the handler
		 */
		const uint64_t id_;
		
		/**
		 * \brief Rpc Status of the current handler
		 */
		RpcStatus status_;
		
		/**
		 * \brief Rpc completion queue
		 */
		unique_ptr<ServerCompletionQueue> rpc_queue_;
		
		/**
		 * \brief Notification completion queue
		 */
		unique_ptr<ServerCompletionQueue> notification_queue_;
		
		/**
		 * \brief The gRPC server context
		 */
		unique_ptr<ServerContext> server_context_;

		/**
		 * \brief The async service used to respond to rpcs
		 */
		unique_ptr<RpcBase::AsyncService> service_;

		/**
		 * \brief The responder
		 */
		ServerAsyncReaderWriter<Command, Command> command_stream_;

		/**
		 * \brief The request
		 */
		Command command_;

		/**
		 * \brief The queue used to respond to the client
		 */
		deque<shared_ptr<Command>> command_queue_ {};

		/**
		 * \brief The lock used to ensure that multiple process is not called many times
		 */
		unique_ptr<mutex> handler_lock_;
		
	public:
		
		/**
		 * \brief Spawn a new request
		 * Set the id of the handler
		 * \param id Id of the handler
		 * \param rpc_queue rpc completion queue
		 * \param notification_queue notification completion queue
		 * \param service the async service
		 */
		RpcHandler(
			uint64_t id, 
			ServerCompletionQueue &rpc_queue,
			ServerCompletionQueue &notification_queue,
			RpcBase::AsyncService &service);

		/**
		 * \brief Get status of the handler
		 * \return 
		 */
		RpcStatus GetStatus() const;

		/**
		 * \brief Get the server context
		 * \return 
		 */
		unique_ptr<ServerContext> GetServerContext() const;

		/**
		 * \brief Get a lock for the handler
		 * \return
		 */
		unique_ptr<mutex> GetHandlerLock() const;
		
		/**
		 * \brief Create a new handler
		 * \return
		 */
		bool Create();

		/**
		 * \brief Process a Rpc event
		 * \param event 
		 */
		void Process(RpcEvent event);
		
		/**
		 * \brief Dispose a handler
		 */
		void Complete();

		/**
		 * \brief Send a command to a connected client
		 * \param operation 
		 * \param command 
		 */
		void SendClientCommand(int operation, Message* command);
	};
}

#endif