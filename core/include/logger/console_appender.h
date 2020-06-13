#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include "log_level.h"
#include "i_log_appender.h"

namespace jade_core
{
	class console_appender : public i_log_appender
	{
	public:
		void append(log_level level, std::string message, std::string tags) override;
	};
}

#endif
