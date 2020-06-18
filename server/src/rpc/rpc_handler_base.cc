
#include "../../include/rpc/rpc_handler_base.h"

#include "../../include/handler/info_handler.h"
#include "../../include/rpc/rpc_handler_status.h"

namespace JadeServer
{
	RpcHandlerBase::RpcHandlerBase(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue) :
		service_(service), completion_queue_(completion_queue), status_(Create)
	{
	}

	void RpcHandlerBase::Respond()
	{
		
	}
}
