#pragma once

#include <future>

#include "../../include/task/task_manager.h"

namespace jade_core
{
	void task_manager::run(task_base* task)
	{
		// Add the task the to the queue
		_tasks.push_back(task);
	}

	void task_manager::tick()
	{
		// Execute the tasks
		for (task_base* task : _tasks)
		{
			// Only execute if it is in progress
			if(task->get_status() != task_status::failure && task->get_status() != task_status::success)
			{
				task->set_execute_result(&std::async(std::launch::async, &task_base::execute, task));
			}
		}

		// Get results of the task
		for (int taskIndex = 0; taskIndex < _tasks.size(); ++taskIndex)
		{
			task_base* task = _tasks[taskIndex];
			
			// Try to obtain the result
			if (task->get_execute_result()->_Is_ready() == false)
			{
				task->get_execute_result()->get();
			}

			// Call the on complete method and remove the task if it is completed
			if (task->get_status() == task_status::failure || task->get_status() == task_status::success)
			{
				// Run the on complete method
				task->on_complete(task->get_status());

				// Remove the task from the task vector
				_tasks.erase(_tasks.begin() + taskIndex);
			}
		}
		for (task_base* task : _tasks)
		{
			
		}
	}
}
