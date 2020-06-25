#pragma once

#include <future>
#include "../../include/task/task_manager.h"

namespace JadeCore
{
	void TaskManager::Run(TaskBase* task)
	{
		// Add the task the to the queue
		tasks_.push_back(task);
	}

	void TaskManager::Tick()
	{
		// Execute the tasks
		for (TaskBase* task : tasks_)
		{
			// Only execute if it is in progress
			if(task->GetStatus() != TaskStatus::Failure && task->GetStatus() != TaskStatus::Success)
			{
				task->SetExecuteResult(&std::async(std::launch::async, &TaskBase::Execute, task));
			}
		}

		// Get results of the task
		for (int taskIndex = 0; taskIndex < tasks_.size(); ++taskIndex)
		{
			TaskBase* task = tasks_[taskIndex];
			
			// Try to obtain the result
			if (task->GetExecuteResult()->_Is_ready() == false)
			{
				task->GetExecuteResult()->get();
			}

			// Call the on complete method and remove the task if it is completed
			if (task->GetStatus() == TaskStatus::Failure || task->GetStatus() == TaskStatus::Success)
			{
				// Run the on complete method
				task->OnComplete(task->GetStatus());

				// Remove the task from the task vector
				tasks_.erase(tasks_.begin() + taskIndex);
			}
		}
		for (TaskBase* task : tasks_)
		{
			
		}
	}
}
