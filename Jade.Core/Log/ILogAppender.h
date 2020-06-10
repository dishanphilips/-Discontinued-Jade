#pragma once

#ifndef JADE_CORE_LOG_ILOGAPPENDER_H_
#define JADE_CORE_LOG_ILOGAPPENDER_H_

#include <string>

#include "Logger.h"

class ILogAppender
{
	public:
		virtual void Log(LogLevel level, std::string tags[], std::string message);
};

#endif