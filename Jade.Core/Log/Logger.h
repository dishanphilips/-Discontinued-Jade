#pragma once

#ifndef JADE_CORE_LOG_LOGGER_H_
#define JADE_CORE_LOG_LOGGER_H_

#include <list>
#include <string>

#include "ILogAppender.h"

/**
 * \brief Specifies the severity of a log
 */
enum LogLevel
{
	Trace,
	Debug,
	Info,
	Warning,
	Error
};


/**
 * \brief Append logs to all registered logging appenders
 */
class Logger
{
	private:
		std::list<ILogAppender> _appenders;
	public:

		/**
		 * \brief Instantiate logger with given appenders
		 * \param appenders 
		 */
		Logger(std::list<ILogAppender> appenders);
	
		/**
		 * \brief Registers a logging appender to a list of appenders
		 * \param appender 
		 */
		void RegisterAppender(ILogAppender appender);

		/**
		 * \brief Removes a given logging appender
		 * \param appender 
		 */
		void UnregisterAppender(ILogAppender appender);
	
		/**
		 * \brief Logs a given log with a tag and level in all appenders
		 * \param level The severity of the log
		 * \param tags Tags to filter logs by
		 * \param message Message of the log
		 */
		void Log(LogLevel level, std::string tags[], std::string message);
		
		/**
		 * \brief Append a trace log
		 * \param tags 
		 * \param message 
		 */
		void LogTrace(std::string tags[], std::string message);

		/**
		 * \brief Append a debug log
		 * \param tags 
		 * \param message 
		 */
		void LogDebug(std::string tags[], std::string message);

		/**
		 * \brief Append a info log
		 * \param tags 
		 * \param message 
		 */
		void LogInfo(std::string tags[], std::string message);

		/**
		 * \brief Append a warning log
		 * \param tags 
		 * \param message 
		 */
		void LogWarning(std::string tags[], std::string message);

		/**
		 * \brief Append an error log
		 * \param tags 
		 * \param message 
		 */
		void LogError(std::string tags[], std::string message);
};

#endif
