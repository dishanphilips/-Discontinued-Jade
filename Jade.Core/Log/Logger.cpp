#pragma once

#ifndef JADE_CORE_LOG_LOGGER_C_
#define JADE_CORE_LOG_LOGGER_C_

#include "Logger.h"

Logger::Logger(std::list<ILogAppender> appenders)
{
	this->_appenders = appenders;
}

void Logger::RegisterAppender(ILogAppender appender)
{
	this->_appenders.push_back(appender);
}

void Logger::UnregisterAppender(ILogAppender appender)
{
	this->_appenders.remove(appender);
}

void Logger::Log(LogLevel level, std::string tags[], const std::string message)
{
	for (ILogAppender appender : this->_appenders)
	{
		appender.Log(level, tags, message);
	}
}

void Logger::LogTrace(std::string tags[], const std::string message)
{
	this->Log(Trace, tags, message);
}

void Logger::LogDebug(std::string tags[], const std::string message)
{
	this->Log(Debug, tags, message);
}

void Logger::LogInfo(std::string tags[], const std::string message)
{
	this->Log(Info, tags, message);
}

void Logger::LogWarning(std::string tags[], const std::string message)
{
	this->Log(Warning, tags, message);
}

void Logger::LogError(std::string tags[], const std::string message)
{
	this->Log(Error, tags, message);
}

#endif
