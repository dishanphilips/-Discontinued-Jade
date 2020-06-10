#include "Logger.h"
#include "LogLevel.h"

namespace JadeCore
{
	Logger::Logger(std::list<ILogAppender> appenders)
	{
		this->_appenders = appenders;
	}

	void JadeCore::Logger::RegisterAppender(ILogAppender appender)
	{
		this->_appenders.push_back(appender);
	}

	void JadeCore::Logger::UnregisterAppender(ILogAppender appender)
	{
		this->_appenders.remove(appender);
	}

	void JadeCore::Logger::Log(LogLevel level, std::string tags[], const std::string message)
	{
		for (ILogAppender appender : this->_appenders)
		{
			appender.Append(level, tags, message);
		}
	}

	void JadeCore::Logger::LogTrace(std::string tags[], const std::string message)
	{
		this->Log(Trace, tags, message);
	}

	void JadeCore::Logger::LogDebug(std::string tags[], const std::string message)
	{
		this->Log(Debug, tags, message);
	}

	void JadeCore::Logger::LogInfo(std::string tags[], const std::string message)
	{
		this->Log(Info, tags, message);
	}

	void JadeCore::Logger::LogWarning(std::string tags[], const std::string message)
	{
		this->Log(Warning, tags, message);
	}

	void JadeCore::Logger::LogError(std::string tags[], const std::string message)
	{
		this->Log(Error, tags, message);
	}
}
