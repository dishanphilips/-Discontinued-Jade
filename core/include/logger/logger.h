#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_LOGGER_H_
#define JADE_CORE_INCLUDE_LOG_LOGGER_H_

#include <list>
#include <string>

#include "log_level.h"
#include "i_log_appender.h"

namespace JadeCore
{
	/**
	 * \brief Append logs to all registered logging appenders
	 */
	static class Logger
	{
	private:
		/**
		 * \brief List of appenders
		 */ 
		static std::list<ILogAppender*> appenders_;

	public:

		/**
		 * \brief Initialize logger with appenders
		 */
		Logger();

		/**
		 * \brief 
		 * \param level Convert a log level to string
		 * \return 
		 */
		static std::string LogLevelToString(LogLevel level);
		
		/**
		 * \brief Registers a logging appender to a list of appenders
		 * \param appender
		 */
		static void RegisterAppender(ILogAppender* appender);

		/**
		 * \brief Removes a given logging appender
		 * \param appender
		 */
		static void UnregisterAppender(ILogAppender* appender);

		/**
		 * \brief Logs a given log with a tag and level in all appenders
		 * \param level The severity of the log
		 * \param tags Tags to filter logs by
		 * \param message Message of the log
		 * \param args Formatting arguments
		 */
		static void Log(LogLevel level, std::string tags, std::string message, va_list args);
		
		/**
		 * \brief Logs a given log with a tag and level in all appenders
		 * \param level The severity of the log
		 * \param tags Tags to filter logs by
		 * \param message Message of the log
		 * \param ... Formatting arguments
		 */
		static void Log(LogLevel level, std::string tags, std::string message, ... );

		/**
		 * \brief Append a trace log
		 * \param tags
		 * \param message
		 * \param ... Formatting arguments
		 */
		static void LogTrace(std::string tags, std::string message, ...);

		/**
		 * \brief Append a debug log
		 * \param tags
		 * \param message
		 * \param ... Formatting arguments
		 */
		static void LogDebug(std::string tags, std::string message, ...);

		/**
		 * \brief Append a info log
		 * \param tags
		 * \param message
		 * \param ... Formatting arguments
		 */
		static void LogInfo(std::string tags, std::string message, ...);

		/**
		 * \brief Append a warning log
		 * \param tags
		 * \param message
		 * \param ... Formatting arguments
		 */
		static void LogWarning(std::string tags, std::string message, ...);

		/**
		 * \brief Append an error log
		 * \param tags
		 * \param message
		 * \param ... Formatting arguments
		 */
		static void LogError(std::string tags, std::string message, ...);
	};
}

#endif
