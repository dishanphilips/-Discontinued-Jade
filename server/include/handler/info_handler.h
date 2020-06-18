#pragma once

#ifndef JADE_SERVER_INCLUDE_HANDLER_INFO_HANDLER_H_
#define JADE_SERVER_INCLUDE_HANDLER_INFO_HANDLER_H_
#include "../rpc/rpc_handler_base.h"

namespace JadeServer
{
	class InfoHandler : public RpcHandlerBase
	{
	private:
		JadeCore::InfoRequest request_;

		JadeCore::InfoResponse response_;

		/**
		 * \brief The responder
		 */
		grpc_impl::ServerAsyncResponseWriter<JadeCore::InfoResponse> responder_;

	public:
		InfoHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue);
		
		void Respond() override;
	};
}

#endif
