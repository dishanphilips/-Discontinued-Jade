#pragma once

#ifndef JADE_SERVER_INCLUDE_STARTUP_STARTUP_TASK_H_
#define JADE_SERVER_INCLUDE_STARTUP_STARTUP_TASK_H_

#include "../../../core/include/jadecore.h"

#include "../rpc/rpc.h"
#include "startup_task.h"

namespace JadeServer
{
	class StartupTask : public JadeCore::StartupTask
	{
	private:

		/**
		 * \brief Reference to the Rpc
		 */
		Rpc* rpc_;
		
		/**
		 * \brief The RPC thread
		 */
		std::thread* rpc_thread_;
		
	public:
		
		/**
		 * \brief Execute the server Start Up task
		 */
		void Execute() override;

		/**
		 * \brief called when task is complete
		 * \param status 
		 */
		void OnComplete(TaskStatus status) override;

		/**
		 * \brief Returns the Rpc thread
		 * \return 
		 */
		std::thread* GetRpcThread();
	};
}

#endif