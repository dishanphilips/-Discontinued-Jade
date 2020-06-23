#pragma once

#include "../logger/console_appender.h"
#include "../logger/Logger.h"

#include "../startup/startup_task.h"

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
