#pragma once

#ifndef JADE_SERVER_SRC_COMMAND_INFO_COMMAND_H_
#define JADE_SERVER_SRC_COMMAND_INFO_COMMAND_H_

#include "jadecore.h"

namespace JadeServer
{
	class InfoCommandHandler : public JadeCore::ICommandHandler
	{
	public:
		JadeCore::InfoResponse* Execute(const std::string raw) override;
	};
}

#endif
