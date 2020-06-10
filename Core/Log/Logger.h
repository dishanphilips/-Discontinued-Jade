#pragma once

#ifndef JADE_CORE_LOG_LOGGER_H_
#define JADE_CORE_LOG_LOGGER_H_

#include <list>
#include <string>

#include "LogLevel.h"
#include "ILogAppender.h"

namespace JadeCore
{
	/**
	 * \brief Append logs to all registered logging appenders
	 */
	static class Logger
	{
	private:
		static std::list<ILogAppender*> _appenders;
	public:

		/**
		 * \brief Initialize logger with appenders
		 */
		Logger();
		
		/**
		 * \brief Registers a logging appender to a list of appenders
		 * \param appender
		 */
		static void RegisterAppender(ILogAppender &appender);

		/**
		 * \brief Removes a given logging appender
		 * \param appender
		 */
		static void UnregisterAppender(ILogAppender &appender);

		/**
		 * \brief Logs a given log with a tag and level in all appenders
		 * \param level The severity of the log
		 * \param message Message of the log
		 * \param tags Tags to filter logs by
		 */
		static void Log(LogLevel level, std::string message, std::string tags[]);

		/**
		 * \brief Append a trace log
		 * \param message
		 * \param tags
		 */
		static void LogTrace(std::string message, std::string tags[]);

		/**
		 * \brief Append a debug log
		 * \param message
		 * \param tags
		 */
		static void LogDebug(std::string message, std::string tags[]);

		/**
		 * \brief Append a info log
		 * \param message
		 * \param tags* 
		 */
		static void LogInfo(std::string message, std::string tags[]);

		/**
		 * \brief Append a warning log
		 * \param message
		 * \param tags
		 */
		static void LogWarning(std::string message, std::string tags[]);

		/**
		 * \brief Append an error log
		 * \param message
		 * \param tags
		 */
		static void LogError(std::string message, std::string tags[]);
	};
}

#endif
