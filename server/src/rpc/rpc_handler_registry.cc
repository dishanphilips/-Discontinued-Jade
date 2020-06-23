
#include "../handler/info_handler.h"
#include "rpc_handler_registry.h"

namespace JadeServer 
{
	std::list<RpcHandlerBase*> RpcHandlerRegistry::handlers_;

	void RpcHandlerRegistry::Create()
	{
		for each (RpcHandlerBase* handler in handlers_)
		{
			handler->Create();
		}
	}

	void RpcHandlerRegistry::Register(JadeCore::RpcBase::AsyncService* service, grpc::ServerCompletionQueue* completion_queue)
	{
		handlers_.push_back(new InfoHandler(service, completion_queue));
	}
}