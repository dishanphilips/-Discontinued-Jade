#pragma once

#ifndef JADE_CORE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include <string>

#include "../ILogAppender.h"
#include "../LogLevel.h"

namespace JadeCore
{
	class ConsoleAppender : ILogAppender
	{
	public:
		void Append(LogLevel level, std::string tags[], std::string message) override;
	};
}

#endif
