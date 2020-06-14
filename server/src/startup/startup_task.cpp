#pragma once

#include "../../include/startup/startup_task.h"

#include "../../../core/include/logger/logger.h"

namespace jade_server
{	
	void startup_task::execute()
	{
		// 0. Execute base startup
		jade_core::startup_task::execute();

		// Finish the task
		finish();
	}

	void startup_task::on_complete(task_status status)
	{
		// Invoke the base method
		jade_core::startup_task::on_complete(status);

		// Print success log
		jade_core::logger::log_info("Server startup complete!", "Startup");
	}
}
