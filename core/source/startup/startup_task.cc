#pragma once

#include "../../include/startup/startup_task.h"
#include "../../include/logger/console_appender.h"
#include "../../include/logger/logger.h"

namespace JadeCore
{
	void StartupTask::Execute()
	{
		// 1. Register the Logger
		const auto appender = new ConsoleAppender();
		Logger::RegisterAppender(appender);
		Logger::LogInfo("CoreStartup", "Added Console Appender.");
		
		// Finish the task
		Finish();
	}

	void StartupTask::OnComplete(TaskStatus status)
	{
		Logger::LogInfo("CoreStartup", "Core startup complete! Status : ");
	}
}
