#include "../../../core/include/utils/date_time_utils.h"

#include "../../include/handler/info_handler.h"

namespace JadeServer
{
	InfoHandler::InfoHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue):
		RpcHandlerBaseT<JadeCore::InfoRequest, JadeCore::InfoResponse>(service, completion_queue)
	{
	}

	RpcHandlerBase* InfoHandler::Spawn()
	{
		return new InfoHandler(service_, completion_queue_);
	}

	void InfoHandler::Execute()
	{
		response_.set_message("Hello : " + request_.message() + 
			". Server Time Is : " + JadeCore::DateTimeUtils::GetCurrentDateTime() + ".");
	}
}
