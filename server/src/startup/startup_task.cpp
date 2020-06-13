#pragma once

#include "../../include/startup/startup_task.h"

namespace jade_server
{
	startup_task::startup_task() : jade_core::startup_task()
	{
	}

	void startup_task::execute()
	{
		// 0. Execute base startup
		jade_core::startup_task::execute();
	}
}
