#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include <list>

#include "log_level.h"
#include "i_log_appender.h"
#include "../tick/tickable_base.h"

namespace JadeCore
{
	class ConsoleAppender : public ILogAppender, public TickableBase
	{
	private:
		
		/**
		 * \brief A list of logs that need to be appended
		 */
		std::list<std::string> _logs;
	public:
		
		/**
		 * \brief Append a log to console
		 * \param level 
		 * \param message 
		 * \param tags 
		 */
		void Append(LogLevel level, std::string message, std::string tags) override;

		/**
		 * \brief 
		 */
		void Tick() override;
	};
}

#endif
