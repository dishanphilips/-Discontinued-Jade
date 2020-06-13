#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_BASE_H_
#define JADE_CORE_INCLUDE_TASK_TASK_BASE_H_

#include "task_status.h"

namespace jade_core
{
	class task_base
	{
	private:
		
		/**
		 * \brief Status of the task
		 */
		task_status _status = initialized;
				
		/**
		 * \brief Porgress of the task
		 */
		float _progress = 0;
	protected :

		/**
		 * \brief Set the status of the task
		 * \param status 
		 */
		void set_status(task_status status);

		/**
		 * \brief Set the progress of the task
		 * \param progress 
		 */
		void set_progress(float progress);
		
	public:
		/**
		 * \brief Initialize the task
		 */
		task_base()= default;

		/**
		 * \brief status of the task
		 */
		task_status get_status();

		/**
		 * \brief Progress of the task
		 */
		float get_progress();
		
		/**
		 * \brief Execute a task
		 */
		virtual void execute() = 0;
	};
}

#endif