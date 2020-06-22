#pragma once

#ifndef JADE_SERVER_INCLUDE_HANDLER_INFO_HANDLER_H_
#define JADE_SERVER_INCLUDE_HANDLER_INFO_HANDLER_H_

#include "../rpc/rpc_handler_base.h"
#include "../rpc/rpc_handler_base_t.h"

namespace JadeServer
{
	class InfoHandler final : public RpcHandlerBaseT<JadeCore::InfoRequest, JadeCore::InfoResponse>
	{
	protected:

		RpcHandlerBase* Spawn() override;

		void Execute() override;
		
	public:
		
		InfoHandler::InfoHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue);
	};
}

#endif
