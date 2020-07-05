#pragma once

#include "jadecore.h"

#include "rpc/rpc.h"
#include "startup/startup_task.h"
#include "startup/command_startup.h"

using JadeCore::Logger;

namespace JadeServer
{
	void StartupTask::Execute()
	{
		// 0. Execute base startup
		CoreStartupTask::Execute();

		// 1. Set up the commands
		CommandStartup* command_startup = new CommandStartup();
		command_startup->Execute();
		
		// 99. Finally listen to the rpc service
		Logger::LogInfo("ServerStartup", "Creating Rpc Listener.");

		// Create the a thread to run the RPC service
		rpc_ = new Rpc();
		std::thread rpc_thread(&Rpc::Listen, rpc_);

		// Detach and run it independently
		rpc_thread.detach();

		// Add the thread reference
		this->rpc_thread_ = &rpc_thread;
				
		// Finish the task
		Finish();
	}

	void StartupTask::OnComplete(TaskStatus status)
	{
		// Invoke the base method
		CoreStartupTask::OnComplete(status);

		// Print success log
		Logger::LogInfo("ServerStartup", "Server startup complete!");
	}

	std::thread* StartupTask::GetRpcThread()
	{
		return this->rpc_thread_;
	}
}
