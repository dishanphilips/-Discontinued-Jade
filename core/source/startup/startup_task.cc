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
		Logger::LogInfo("Added Console Appender.", "CoreStartup");
		
		// Finish the task
		Finish();
	}

	void StartupTask::OnComplete(TaskStatus status)
	{
		Logger::LogInfo("Core startup complete! Status : ", "CoreStartup");
	}
}
