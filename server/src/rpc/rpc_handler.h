#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_

#include <grpcpp/impl/codegen/completion_queue_impl.h>
#include "../../../core/gen/server.grpc.pb.h"

#include "rpc_handler_status.h"

namespace JadeServer
{	
	class RpcHandler
	{
	protected:
		/**
		 * \brief Async service
		 */
		JadeCore::RpcBase::AsyncService* service_;

		/**
		 * \brief The completion queue
		 */
		grpc::ServerCompletionQueue* completion_queue_;

		/**
		 * \brief The gRPC server context
		 */
		grpc_impl::ServerContext context_;

		/**
		 * \brief The request
		 */
		JadeCore::CommandRequest command_request_;

		/**
		 * \brief The response
		 */
		JadeCore::CommandResponse command_response_;

		/**
		 * \brief The responder
		 */
		grpc_impl::ServerAsyncReaderWriter<JadeCore::CommandResponse, JadeCore::CommandRequest> command_responder_;

		
		/**
		 * \brief The status of the request
		 */
		RpcHandlerStatus status_;

		/**
		 * \brief Specify if the task was successful 
		 */
		bool ok_ = true;
		
	public:
		
		/**
		 * \brief Spawn a new request
		 * \param service 
		 * \param completion_queue 
		 */
		RpcHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue);

		/**
		 * \brief Get the current status of the rpc handler
		 * \return 
		 */
		RpcHandlerStatus GetStatus();

		/**
		 * \brief Create a new handler
		 * \return
		 */
		void Create();

		/**
		 * \brief Process and respond to a rpc request
		 */
		void Process();
		
		/**
		 * \brief Dispose a handler
		 */
		void Dispose();
	};
}

#endif