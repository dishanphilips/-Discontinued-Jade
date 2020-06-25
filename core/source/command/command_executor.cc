#include <stdexcept>

#include "../../include/command/command_executor.h"
#include "../../include/command/i_command_handler.h"

namespace JadeCore
{
	/**
	 * \brief Initialize the handler registry
	 */
	std::map<int, ICommandHandler*> CommandExecutor::handler_registry_;
	
	void CommandExecutor::Register(int operation_id, JadeCore::ICommandHandler* handler)
	{
		handler_registry_.insert({operation_id, handler});
	}

	std::string CommandExecutor::HandleCommand(int operation, const std::string request)
	{
		if(handler_registry_.at(operation) != nullptr)
		{
			return handler_registry_[operation]->Execute(request)->SerializeAsString();
		}
		else
		{
			throw std::invalid_argument("Could not find operation id : " + operation);
		}
	}
}
