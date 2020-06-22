#include <grpcpp/server_builder.h>

#include "../../../core/include/logger/logger.h"
#include "../../../core/include/utils/date_time_utils.h"

#include "../../include/rpc/rpc.h"

#include "../../include/handler/info_handler.h"
#include "../../include/rpc/rpc_handler_base.h"

namespace JadeServer
{
	void Rpc::Listen()
	{
		// Create server address
		std::string server_address("0.0.0.0:50051");

		// Enable health check
		grpc::EnableDefaultHealthCheckService(true);

		// Create a server builder
		grpc::ServerBuilder builder;

		// Add listening port
		builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

		// Register service
		builder.RegisterService(&service_);
		
		// Add the completion queue
		completion_queue_ = builder.AddCompletionQueue();
	
		// Create the server
		grpc_server_ = std::unique_ptr<Server>(builder.BuildAndStart());
		JadeCore::Logger::LogInfo("Server Listening On : " + server_address, "StartUp");

		// Handle RPCs
		this->Handle();
	}

	void Rpc::Handle()
	{
		InfoHandler* info = new InfoHandler(&service_, completion_queue_.get());
		info->Create();
		void* tag;
		bool ok;
		
		while (completion_queue_->Next(&tag, &ok))
		{
			GPR_ASSERT(ok);

			// Create the Rpc Tag
			RpcHandlerBase* rpcTag = static_cast<RpcHandlerBase*>(tag);

			if(rpcTag->GetStatus() == RpcHandlerStatus::Create)
			{
				rpcTag->Create();
			}
			else if(rpcTag->GetStatus() == RpcHandlerStatus::Process)
			{
				rpcTag->Process();
			}
			else if (rpcTag->GetStatus() == RpcHandlerStatus::Finish)
			{
				rpcTag->Dispose();
			}
		}
	}
}
