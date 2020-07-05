#pragma once
#pragma once

#ifndef JADE_CORE_INCLUDE_STARTUP_STARTUP_TASK_H_
#define JADE_CORE_INCLUDE_STARTUP_STARTUP_TASK_H_

#include "task/task_base.h"

namespace JadeCore
{
	class CoreStartupTask : public TaskBase
	{
	public:
		
		/**
		 * \brief Execute the core startup task
		 */
		void Execute() override;

		/**
		 * \brief Executed on complete
		 * \param status 
		 */
		void OnComplete(TaskStatus status) override;
	};
}

#endif