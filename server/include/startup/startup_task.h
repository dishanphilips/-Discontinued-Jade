#pragma once

#ifndef JADE_SERVER_INCLUDE_STARTUP_STARTUP_H_
#define JADE_SERVER_INCLUDE_STARTUP_STARTUP_H_

#include "../../../core/include/startup/startup_task.h"
#include "../rpc/rpc.h"

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