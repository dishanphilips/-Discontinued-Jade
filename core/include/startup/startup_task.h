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
		 * \brief Run the core startup task
		 */
		startup_task();

		/**
		 * \brief Execute the core startup task
		 */
		void execute() override;
	};
}

#endif