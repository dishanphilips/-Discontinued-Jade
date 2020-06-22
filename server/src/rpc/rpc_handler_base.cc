
#include "../../include/rpc/rpc_handler_base.h"

#include "../../include/handler/info_handler.h"
#include "../../include/rpc/rpc_handler_status.h"

namespace JadeServer
{
	RpcHandlerBase::RpcHandlerBase(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue) :
		service_(service), completion_queue_(completion_queue), status_(RpcHandlerStatus::Create)
	{
	}

	RpcHandlerStatus RpcHandlerBase::GetStatus()
	{
		return status_;
	}

	void RpcHandlerBase::Create()
	{
		// Set the status to process
		status_ = RpcHandlerStatus::Process;

		// Initialize the handler
		this->Initialize();
	}

	void RpcHandlerBase::Process()
	{
		// Spawn a new handler
		RpcHandlerBase* newHandler = this->Spawn();
		newHandler->Create();

		// Execute the current handler
		this->Execute();

		// Finalize the task
		this->Finalize();
		
		// Mark it as finished
		status_ = RpcHandlerStatus::Finish;
	}

	void RpcHandlerBase::Dispose()
	{
		GPR_ASSERT(status_ == RpcHandlerStatus::Finish);
		delete this;
	}
}
