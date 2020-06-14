#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_BASE_H_
#define JADE_CORE_INCLUDE_TASK_TASK_BASE_H_

#include <future>

#include "task_status.h"

namespace jade_core
{
	class task_base
	{
	private:
		
		/**
		 * \brief Status of the task
		 */
		task_status _status;
				
		/**
		 * \brief progress of the task
		 */
		float _progress;

		/**
		 * \brief The result of the execution
		 */
		std::future<void>* _execute_result;
		
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
		task_base();

		/**
		 * \brief status of the task
		 */
		task_status get_status() const;

		/**
		 * \brief Progress of the task
		 */
		float get_progress();

		/**
		 * \brief return the execute result
		 * \return 
		 */
		std::future<void>* get_execute_result() const;
		
		/**
		 * \brief Set the execute result
		 * \param result 
		 */
		void set_execute_result(std::future<void>* result);
		
		/**
		 * \brief Execute a task
		 */
		virtual void execute();

		/**
		 * \brief Finish the execution of the task
		 * \param status of the completed task 
		 */
		void finish(task_status status = task_status::success);

		/**
		 * \brief Callback made when the task completes
		 * \param status of the completed task 
		 */
		virtual void on_complete(task_status status) = 0;
	};
}

#endif