#pragma once

#include "../../../core/include/jadecore.h"

#include "../../include/server/server.h"

namespace JadeServer
{
	void Server::Run()
	{
		startup_ = new StartupTask();
		task_manager_ = new JadeCore::TaskManager();
		task_manager_->Run(startup_);
		this->rpc_thread_ = startup_->GetRpcThread();
		JadeCore::Ticker::Start();
	}
}
