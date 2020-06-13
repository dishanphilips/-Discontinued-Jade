#pragma once

#ifndef JADE_SERVER_INCLUDE_STARTUP_STARTUP_H_
#define JADE_SERVER_INCLUDE_STARTUP_STARTUP_H_

#include "../../../core/include/startup/startup_task.h"

namespace jade_server
{
	class startup_task : public jade_core::startup_task
	{
	public:
		
		/**
		 * \brief Initialize the start up task
		 */
		startup_task();

		/**
		 * \brief Execute the server Start Up task
		 */
		void execute() override;
	};
}

#endif