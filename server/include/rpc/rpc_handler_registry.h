#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_REGISTRY_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_REGISTRY_H_

#include <list>

#include <grpcpp/server.h>

#include "rpc_handler_base.h"

namespace JadeServer 
{
	static class RpcHandlerRegistry
	{
	private:

		/**
		 * \brief List of all handlers
		 */
		static std::list<RpcHandlerBase*> handlers_;

	public:
		
		/**
		 * \brief Create the handlers
		 */
		static void Create();
				
		/**
		 * \brief Register the handlers
		 * \param service
		 * \param completion_queue
		 */
		static void Register(JadeCore::RpcBase::AsyncService* service, grpc::ServerCompletionQueue* completion_queue);
	};
}

#endif