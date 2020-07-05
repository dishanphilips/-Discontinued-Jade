#pragma once

#include "startup/core_startup_task.h"
#include "logger/console_appender.h"
#include "logger/logger.h"

namespace JadeCore
{
	void CoreStartupTask::Execute()
	{
		// 1. Register the Logger
		const auto appender = new ConsoleAppender();
		Logger::RegisterAppender(appender);
		Logger::LogInfo("CoreStartup", "Added Console Appender.");
		
		// Finish the task
		Finish();
	}

	void CoreStartupTask::OnComplete(TaskStatus status)
	{
		Logger::LogInfo("CoreStartup", "Core startup complete! Status : ");
	}
}
