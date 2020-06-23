#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_BASE_H_
#define JADE_CORE_INCLUDE_TASK_TASK_BASE_H_

#include <future>

#include "task_status.h"

namespace JadeCore
{
	class TaskBase
	{
	private:
		
		/**
		 * \brief Status of the task
		 */
		TaskStatus status_;
				
		/**
		 * \brief progress of the task
		 */
		float progress_;

		/**
		 * \brief The result of the execution
		 */
		std::future<void>* execute_result_;
		
	protected :

		/**
		 * \brief Set the status of the task
		 * \param status 
		 */
		void SetStatus(TaskStatus status);

		/**
		 * \brief Set the progress of the task
		 * \param progress 
		 */
		void SetProgress(float progress);
		
	public:
		
		/**
		 * \brief Initialize the task
		 */
		TaskBase();

		/**
		 * \brief status of the task
		 */
		TaskStatus GetStatus() const;

		/**
		 * \brief Progress of the task
		 */
		float GetProgress();

		/**
		 * \brief return the execute result
		 * \return 
		 */
		std::future<void>* GetExecuteResult() const;
		
		/**
		 * \brief Set the execute result
		 * \param result 
		 */
		void SetExecuteResult(std::future<void>* result);
		
		/**
		 * \brief Execute a task
		 */
		virtual void Execute();

		/**
		 * \brief Finish the execution of the task
		 * \param status of the completed task 
		 */
		void Finish(TaskStatus status = TaskStatus::Success);

		/**
		 * \brief Callback made when the task completes
		 * \param status of the completed task 
		 */
		virtual void OnComplete(TaskStatus status) = 0;
	};
}

#endif