#pragma once

#ifndef JADE_CORE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include "../LogLevel.h"
#include "../ILogAppender.h"

namespace JadeCore
{
	class ConsoleAppender : ILogAppender
	{
	public:
		void Append(LogLevel level, std::string message, std::string tags[]) override;
	};
}

#endif
