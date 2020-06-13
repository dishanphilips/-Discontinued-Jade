#include <string>

#include "../../include/logger/Logger.h"

namespace jade_core
{
	/**
	 * \brief _appenders declaration
	 */
	std::list<i_log_appender*> logger::_appenders;
	
	logger::logger()
	{
	}

	std::string logger::log_level_to_string(jade_core::log_level level)
	{
		std::string logLevel;

		switch (level)
		{
			default:
				
			case jade_core::log_level::trace:
				return "Trace";
			case jade_core::log_level::debug:
				return "Debug";
			case jade_core::log_level::info:
				return "Info";
			case jade_core::log_level::warning:
				return "Warning";
			case jade_core::log_level::error:
				return "Error";
		}
	}
	
	void logger::register_appender(i_log_appender* appender)
	{
		_appenders.push_back(appender);
	}

	void logger::unregister_appender(i_log_appender* appender)
	{
		_appenders.remove(appender);
	}

	void logger::log(log_level level, std::string message, std::string tags)
	{
		for (i_log_appender*appender : _appenders)
		{
			appender->append(level, message, tags);
		}
	}

	void logger::log_trace(std::string message, std::string tags)
	{
		log(log_level::trace, message, tags);
	}

	void logger::log_debug(const std::string message, std::string tags)
	{
		log(log_level::debug, message, tags);
	}

	void logger::log_info(const std::string message, std::string tags)
	{
		log(log_level::info, message, tags);
	}

	void logger::log_warning(const std::string message, std::string tags)
	{
		log(log_level::warning, message, tags);
	}

	void logger::log_error(const std::string message, std::string tags)
	{
		log(log_level::error, message, tags);
	}
}
