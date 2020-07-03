#include "../../include/startup/command_startup.h"
#include "../../include/command/info_command_handler.h"

namespace JadeServer
{
	void CommandStartup::Execute()
	{
		JadeCore::Logger::LogInfo("StartUp", "Registering Command Handlers");
		
		JadeCore::CommandExecutor::Register(1, new JadeServer::InfoCommandHandler());
	}

	void CommandStartup::OnComplete(TaskStatus status)
	{
		JadeCore::Logger::LogInfo("StartUp", "Registering Command Complete");
	}
}
