#pragma once

#include "../../include/logger/console_appender.h"
#include "../../include/logger/logger.h"

#include "../../include/startup/startup_task.h"

namespace jade_core
{
	void startup_task::execute()
	{
		// 1. Register the Logger
		const auto appender = new console_appender();
		logger::register_appender(appender);

		// Finish the task
		finish();
	}

	void startup_task::on_complete(task_status status)
	{
		jade_core::logger::log_info("Core startup complete!", "Startup");
	}
}
