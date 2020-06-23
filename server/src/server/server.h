#pragma once

#ifndef JADE_SERVER_INCLUDE_SERVER_SERVER_H_
#define JADE_SERVER_INCLUDE_SERVER_SERVER_H_

#include "../../../core/include/jadecore.h"

#include "../startup/startup_task.h"
#include "server.h"

namespace JadeServer
{
	class Server
	{
	private:
		/**
		 * \brief The task manager of the server
		 */
		JadeCore::TaskManager* task_manager_;

		/**
		 * \brief The server startup task
		 */
		StartupTask* startup_;

		/**
		 * \brief The RPC thread
		 */
		std::thread* rpc_thread_;
	public:
		
		/**
		 * \brief Execute the server
		 */
		void Run();
	};
}

#endif
