#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_H_

#include "../../../core/include/task/task_manager.h"
#include "../../../Core/include/tick/tickable_base.h"

#include "../startup/startup_task.h"

namespace jade_server
{
	class server : public jade_core::tickable_base
	{
	private:
		/**
		 * \brief The task manager of the server
		 */
		jade_core::task_manager _task_manager;

		/**
		 * \brief The server startup task
		 */
		startup_task* _startup;
		
	public:
		server();
	protected:
		void tick() override;
	};
}

#endif
