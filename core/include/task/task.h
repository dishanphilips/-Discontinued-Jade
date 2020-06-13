#pragma once

#ifndef JADE_CORE_INCLUDE_TASK_TASK_H_
#define JADE_CORE_INCLUDE_TASK_TASK_H_

#include "TaskStatus.h"

namespace JadeCore
{
	class TaskBase
	{
	private:
		
		/**
		 * \brief Status of the task
		 */
		TaskStatus _status;
				
		/**
		 * \brief Porgress of the task
		 */
		float _progress;
	public:

		/**
		 * \brief status of the task
		 */
		TaskStatus GetStatus();

		/**
		 * \brief Progress of the task
		 */
		float GetProgress;
		
		/**
		 * \brief Execute a task
		 */
		virtual void Execute() = 0;
	};
}

#endif