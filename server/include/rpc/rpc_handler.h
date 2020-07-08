#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_

#include <deque>

#include <grpcpp/impl/codegen/completion_queue_impl.h>

#include "jadecore.h"

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
		 * \brief The gRPC server context
		 */
		std::shared_ptr<grpc::ServerContext> server_context_;
		
		/**
		 * \brief The responder
		 */
		grpc::ServerAsyncReaderWriter<JadeCore::Command, JadeCore::Command> command_stream_;

		/**
		 * \brief The request
		 */
		JadeCore::Command command_;

		/**
		 * \brief The queue used to respond to the client
		 */
		std::deque<std::shared_ptr<JadeCore::Command>> command_queue_;

		/**
		 * \brief The lock used to ensure that multiple process is not called many times
		 */
		std::shared_ptr<std::mutex> handler_lock_;
		
	public:
		
		/**
		 * \brief Spawn a new request
		 * Set the id of the handler
		 * \param id Id of the handler
		 */
		RpcHandler(uint64_t id);

		/**
		 * \brief Get status of the handler
		 * \return 
		 */
		RpcStatus GetStatus() const;

		/**
		 * \brief Get the server context
		 * \return 
		 */
		std::shared_ptr<grpc::ServerContext> GetServerContext() const;

		/**
		 * \brief Get the server context
		 * \return
		 */
		std::shared_ptr<std::mutex> GetHandlerLock() const;

		/**
		 * \brief Create a new handler
		 * \param service 
		 * \param rpc_queue 
		 * \param notification_queue 
		 * \return 
		 */
		bool Create(JadeCore::RpcBase::AsyncService &service, grpc::ServerCompletionQueue* rpc_queue, grpc::ServerCompletionQueue* notification_queue);

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
		void SendClientCommand(int operation, grpc::protobuf::Message* command);
	};
}

#endif