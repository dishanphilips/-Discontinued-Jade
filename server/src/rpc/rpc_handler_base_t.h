#pragma once

#ifndef JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_T_H_
#define JADE_SERVER_INCLUDE_RPC_RPC_HANDLER_BASE_T_H_

#include "../../../core/include/jadecore.h"
#include "rpc_handler_base.h"

namespace JadeServer
{
	// Templated class for Rpc Request and Response
	template <class TRpcRequest, class TRpcResponse>

	class RpcHandlerBaseT : public RpcHandlerBase
	{
	protected:

		// Define a type def for the GRPC function
		typedef void (JadeCore::RpcBase::AsyncService::*GrpcService)
		(
			grpc::ServerContext*, 
			TRpcRequest*, 
			grpc::ServerAsyncResponseWriter<TRpcResponse>* ,
			grpc::CompletionQueue*, 
			grpc::ServerCompletionQueue*, 
			void*
		);

		/**
		 * \brief The request
		 */
		TRpcRequest request_;

		/**
		 * \brief The response
		 */
		TRpcResponse response_;

		/**
		 * \brief The responder
		 */
		grpc_impl::ServerAsyncResponseWriter<TRpcResponse> responder_;
			
		/**
		 * \brief Get the Grpc Service
		 */
		virtual GrpcService GetService() = 0;

		/**
		 * \brief Initialize the handler
		 */
		void Initialize() override
		{
			(service_->*GetService())(&context_, &request_, &responder_, completion_queue_, completion_queue_, this);
		}

		/**
		 * \brief Finalize the handler
		 */
		void Finalize() override
		{
			if (ok_)
			{
				responder_.Finish(response_, grpc::Status::OK, this);
			}
			else
			{
				responder_.Finish(response_, grpc::Status::CANCELLED, this);
			}
		}
		
	public:
				
		/**
		 * \brief 
		 * \param service 
		 * \param completion_queue 
		 */
		RpcHandlerBaseT(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue) :
		RpcHandlerBase(service, completion_queue), responder_(&context_) {}
	};
}

#endif