#include <string>

#include "../../include/logger/Logger.h"

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
				
			case JadeCore::LogLevel::Trace:
				return "Trace";
			case JadeCore::LogLevel::Debug:
				return "Debug";
			case JadeCore::LogLevel::Info:
				return "Info";
			case JadeCore::LogLevel::Warning:
				return "Warning";
			case JadeCore::LogLevel::Error:
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

	void Logger::Log(LogLevel level, std::string message, std::string tags)
	{
		for (ILogAppender*appender : appenders_)
		{
			appender->Append(level, message, tags);
		}
	}

	void Logger::LogTrace(std::string message, std::string tags)
	{
		Log(LogLevel::Trace, message, tags);
	}

	void Logger::LogDebug(const std::string message, std::string tags)
	{
		Log(LogLevel::Debug, message, tags);
	}

	void Logger::LogInfo(const std::string message, std::string tags)
	{
		Log(LogLevel::Info, message, tags);
	}

	void Logger::LogWarning(const std::string message, std::string tags)
	{
		Log(LogLevel::Warning, message, tags);
	}

	void Logger::LogError(const std::string message, std::string tags)
	{
		Log(LogLevel::Error, message, tags);
	}
}
