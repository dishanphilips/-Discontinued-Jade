#pragma once

#ifndef JADE_CORE_INCLUDE_COMMAND_I_COMMAND_HANDLER_H_
#define JADE_CORE_INCLUDE_COMMAND_I_COMMAND_HANDLER_H_

#include <google/protobuf/message.h>

namespace JadeCore
{
	class ICommandHandler
	{
	public:
		virtual google::protobuf::Message* Execute(const std::string request) = 0;
	};
}

#endif