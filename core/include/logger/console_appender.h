#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include <string>
#include <iostream>
#include <vector>
#include <cstdarg>

#include "logger/logger.h"
#include "utils/date_time_utils.h"

#include "log_level.h"
#include "i_log_appender.h"
#include "tick/tickable_base.h"

using std::string;
using std::list;

namespace JadeCore
{
	class ConsoleAppender : public ILogAppender, public TickableBase
	{
	private:
		
		/**
		 * \brief A list of logs that need to be appended
		 */
		list<string> _logs;
	public:
		
		/**
		 * \brief Append a log to console
		 * \param level
		 * \param tags 
		 * \param message 
		 * \param args Formatting arguments 
		 */
		void Append(LogLevel level, string tags, string message, va_list args) override;

		/**
		 * \brief 
		 */
		void Tick() override;
	};
}

#endif
