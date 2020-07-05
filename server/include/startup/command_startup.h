#pragma once

#ifndef JADE_SERVER_INCLUDE_STARTUP_COMMAND_STARTUP_H_
#define JADE_SERVER_INCLUDE_STARTUP_COMMAND_STARTUP_H_

#include "jadecore.h"

namespace JadeServer
{
	class CommandStartup : public JadeCore::TaskBase
	{
	public:
		void Execute() override;
		
		void OnComplete(TaskStatus status) override;
	};
}

#endif