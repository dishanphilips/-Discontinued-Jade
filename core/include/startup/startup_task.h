#pragma once
#pragma once

#ifndef JADE_CORE_INCLUDE_STARTUP_STARTUP_TASK_H_
#define JADE_CORE_INCLUDE_STARTUP_STARTUP_TASK_H_

#include "../task/task_base.h"

namespace jade_core
{
	class startup_task : public task_base
	{
	public:
		
		/**
		 * \brief Execute the core startup task
		 */
		void execute() override;

		/**
		 * \brief Executed on complete
		 * \param status 
		 */
		void on_complete(task_status status) override;
	};
}

#endif