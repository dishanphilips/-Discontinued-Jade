#include <string>

#include "../../include/Logger/Logger.h"

namespace JadeCore
{
	/**
	 * \brief List of appenders
	 */
	static std::list<ILogAppender*> _appenders;
	
	Logger::Logger()
	{;
	}

	void Logger::RegisterAppender(ILogAppender* appender)
	{
		_appenders.push_back(appender);
	}

	void Logger::UnregisterAppender(ILogAppender* appender)
	{
		_appenders.remove(appender);
	}

	void Logger::Log(LogLevel level, std::string message, std::string tags)
	{
		for (ILogAppender *appender : _appenders)
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
