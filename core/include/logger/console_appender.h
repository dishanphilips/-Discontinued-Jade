#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_APPENDERS_CONSOLEAPPENDER_H_

#include <list>

#include "log_level.h"
#include "i_log_appender.h"
#include "../tick/tickable_base.h"

namespace jade_core
{
	class console_appender : public i_log_appender, public tickable_base
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
		void append(log_level level, std::string message, std::string tags) override;

		/**
		 * \brief 
		 */
		void tick() override;
	};
}

#endif
