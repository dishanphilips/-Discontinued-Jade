#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_H_

#include <grpcpp/impl/codegen/completion_queue_impl.h>
#include "../../../core/gen/server.grpc.pb.h"

#include "rpc_handler_status.h"

namespace JadeServer
{
	class RpcHandlerBase
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
		 * \brief The status of the request
		 */
		RpcHandlerStatus status_;
		
	public:
		
		/**
		 * \brief Spawn a new request
		 * \param service 
		 * \param completion_queue 
		 */
		RpcHandlerBase(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue);

		/**
		 * \brief Process and respond to a rpc request
		 */
		virtual void Respond();
	};
}

#endif