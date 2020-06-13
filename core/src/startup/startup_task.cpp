#pragma once

#include "../../include/logger/console_appender.h"
#include "../../include/logger/logger.h"

#include "../../include/startup/startup_task.h"

namespace jade_core
{
	startup_task::startup_task() : task_base()
	{
	}

	void startup_task::execute()
	{
		// 1. Register the Logger
		const auto appender = new console_appender();
		logger::register_appender(appender);
	}
}
