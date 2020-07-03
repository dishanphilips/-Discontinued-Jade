#include <cstdarg>
#include <list>
#include <string>

#include "../../include/logger/logger.h"
#include "../../include/logger/i_log_appender.h"

using std::string;

namespace JadeCore
{
	/**
	 * \brief _appenders declaration
	 */
	std::list<ILogAppender*> Logger::appenders_;
	
	Logger::Logger()
	{
	}

	std::string Logger::LogLevelToString(JadeCore::LogLevel level)
	{
		std::string logLevel;

		switch (level)
		{
			default:
				
			case LogLevel::Trace:
				return "Trace";
			case LogLevel::Debug:
				return "Debug";
			case LogLevel::Info:
				return "Info";
			case LogLevel::Warning:
				return "Warning";
			case LogLevel::Error:
				return "Error";
		}
	}
	
	void Logger::RegisterAppender(ILogAppender* appender)
	{
		appenders_.push_back(appender);
	}

	void Logger::UnregisterAppender(ILogAppender* appender)
	{
		appenders_.remove(appender);
	}

	void Logger::Log(LogLevel level, std::string tags, std::string message, va_list args)
	{
		for (ILogAppender* appender : appenders_)
		{
			appender->Append(level, tags, message, args);
		}
	}

	void Logger::Log(LogLevel level, string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(level, tags, message, args);
	}

	void Logger::LogTrace(string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(LogLevel::Trace, tags, message, args);
	}

	void Logger::LogDebug(string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(LogLevel::Debug, tags, message, args);
	}

	void Logger::LogInfo(string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(LogLevel::Info, tags, message, args);
	}

	void Logger::LogWarning(string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(LogLevel::Warning, tags, message, args);
	}

	void Logger::LogError(string tags, string message, ...)
	{
		va_list args;
		va_start(args, message);
		Log(LogLevel::Trace, tags, message, args);
	}
}
