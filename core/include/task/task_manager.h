#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_MANAGER_H_
#define JADE_CORE_INCLUDE_TASK_TASK_MANAGER_H_

#include "../tick/tickable_base.h"

#include "task_base.h"

namespace JadeCore
{
	class TaskManager : public TickableBase
	{
	private:
		
		/**
		 * \brief A list of all the current tasks that are running
		 */
		std::vector<TaskBase*> tasks_;
		
	public:

		/**
		 * \brief Runs a given task by running it
		 * \param task 
		 */
		void Run(TaskBase* task);

		/**
		 * \brief Tick the task manager
		 */
		void Tick() override;
	};
}

#endif
