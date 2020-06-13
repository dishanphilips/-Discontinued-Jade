#pragma once

#ifndef JADE_CORE_INCLUDE_LOG_LOGGER_H_
#define JADE_CORE_INCLUDE_LOG_LOGGER_H_

#include <list>
#include <string>

#include "log_level.h"
#include "i_log_appender.h"

namespace jade_core
{
	/**
	 * \brief Append logs to all registered logging appenders
	 */
	static class logger
	{
	private:
		/**
		 * \brief List of appenders
		 */
		static std::list<i_log_appender*> _appenders;

	public:

		/**
		 * \brief Initialize logger with appenders
		 */
		logger();

		/**
		 * \brief 
		 * \param level Convert a log level to string
		 * \return 
		 */
		static std::string log_level_to_string(log_level level);
		
		/**
		 * \brief Registers a logging appender to a list of appenders
		 * \param appender
		 */
		static void register_appender(i_log_appender* appender);

		/**
		 * \brief Removes a given logging appender
		 * \param appender
		 */
		static void unregister_appender(i_log_appender* appender);

		/**
		 * \brief Logs a given log with a tag and level in all appenders
		 * \param level The severity of the log
		 * \param message Message of the log
		 * \param tags Tags to filter logs by
		 */
		static void log(log_level level, std::string message, std::string tags);

		/**
		 * \brief Append a trace log
		 * \param message
		 * \param tags
		 */
		static void log_trace(std::string message, std::string tags);

		/**
		 * \brief Append a debug log
		 * \param message
		 * \param tags
		 */
		static void log_debug(std::string message, std::string tags);

		/**
		 * \brief Append a info log
		 * \param message
		 * \param tags* 
		 */
		static void log_info(std::string message, std::string tags);

		/**
		 * \brief Append a warning log
		 * \param message
		 * \param tags
		 */
		static void log_warning(std::string message, std::string tags);

		/**
		 * \brief Append an error log
		 * \param message
		 * \param tags
		 */
		static void log_error(std::string message, std::string tags);
	};
}

#endif
