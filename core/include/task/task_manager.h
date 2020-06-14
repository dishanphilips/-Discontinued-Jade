#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_MANAGER_H_
#define JADE_CORE_INCLUDE_TASK_TASK_MANAGER_H_

#include "../tick/tickable_base.h"

#include "task_base.h"

namespace jade_core
{
	class task_manager : public tickable_base
	{
	private:
		
		/**
		 * \brief A list of all the current tasks that are running
		 */
		std::vector<task_base*> _tasks;
		
	public:

		/**
		 * \brief Runs a given task by running it
		 * \param task 
		 */
		void run(task_base* task);

		/**
		 * \brief Tick the task manager
		 */
		void tick() override;
	};
}

#endif
