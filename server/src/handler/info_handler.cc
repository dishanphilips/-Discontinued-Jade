
#include "../../include/handler/info_handler.h"

namespace JadeServer
{
	InfoHandler::InfoHandler(JadeCore::RpcBase::AsyncService* service, grpc_impl::ServerCompletionQueue* completion_queue) :
		RpcHandlerBase(service, completion_queue), responder_(&context_)
	{
        this->Respond();
	}

	void InfoHandler::Respond()
	{
        if (status_ == Create) 
        {
            status_ = Process;
            service_->RequestInfo(&context_, &request_, &responder_, completion_queue_, completion_queue_, this);
        }
        else if (status_ == Process) 
        {
            new InfoHandler(service_, completion_queue_);
            std::string prefix("Hello ");
            response_.set_message(prefix + request_.message());
            status_ = Finish;
            responder_.Finish(response_, grpc::Status::OK, this);
        }
        else 
        {
            GPR_ASSERT(status_ == Finish);
            delete this;
        }
	}
}
