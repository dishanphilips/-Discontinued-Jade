#pragma once

#ifndef JADE_CORE_INCLUDE_COMMAND_COMMAND_EXECUTOR_H_
#define JADE_CORE_INCLUDE_COMMAND_COMMAND_EXECUTOR_H_

#include <string>
#include <map>

#include "i_command_handler.h"

namespace JadeCore
{
	class CommandExecutor
	{
	private:

		/**
		 * \brief a vector of registered handlers
		 */
		static std::map<int, ICommandHandler*> handler_registry_;
		
	public:
		
		/**
		 * \brief Register a command handler with an operation id
		 * \param operation_id 
		 * \param handler 
		 */
		static void Register(int operation_id, JadeCore::ICommandHandler* handler);

		/**
		 * \brief Executes a given command operation
		 * \param operation 
		 * \param request 
		 * \return 
		 */
		static std::string HandleCommand(int operation, std::string request);
	};
}

#endif