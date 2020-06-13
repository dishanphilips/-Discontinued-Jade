#pragma once
#include "../../include/task/task_manager.h"

namespace jade_core
{
	void task_manager::run(task_base* task)
	{
		_tasks.push_back(task);
	}

	void task_manager::tick()
	{
		for (task_base* task : _tasks)
		{
			task->execute();
		}
	}
}
