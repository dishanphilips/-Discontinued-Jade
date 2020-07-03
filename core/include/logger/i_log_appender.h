#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_
#define JADE_CORE_INCLUDE_LOG_ILOGAPPENDER_H_

#include <string>

namespace JadeCore
{
	class ILogAppender
	{
	public:
		
		/**
		 * \brief Append a log with the given data
		 * \param level The log level of the message
		 * \param tags Tags used to identify groups of logs
		 * \param message The message of a log
		 * \param args Formatting arguments
		 */
		virtual void Append(LogLevel level, std::string tags, std::string message, va_list args) = 0;
	};
}

#endif