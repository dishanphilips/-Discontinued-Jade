#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_RPC_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_RPC_H_

#include <memory>

#include <grpcpp/server.h>

#include "../../../core/include/jadecore.h"

using grpc::Server;

namespace JadeServer
{
	class Rpc final : public JadeCore::RpcBase::AsyncService
	{
	private:

		/**
		 * \brief The completion queue for GRPC
		 */
		std::unique_ptr<grpc::ServerCompletionQueue> completion_queue_;

		/**
		 * \brief Instance of the GRPC server
		 */
		std::unique_ptr<Server> grpc_server_;

		/**
		 * \brief Async service
		 */
		JadeCore::RpcBase::AsyncService service_;

		/**
		 * \brief Start handling RPCs
		 */
		void Handle();
		
	public:

		/**
		 * \brief Run the Rpc server
		 */
		void Listen();
	};
}

#endif