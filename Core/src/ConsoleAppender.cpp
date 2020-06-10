#include <string>
#include <iostream>

#include "ConsoleAppender.h"
#include "../LogLevel.h"
#include "../../Utils/ArrayUtils.h"

namespace JadeCore
{
	void ConsoleAppender::Append(LogLevel level, std::string message, std::string tags[])
	{
		std::string logLevel;

		switch (level)
		{
			case LogLevel::Trace:
				logLevel = "Trace";
				break;
			case LogLevel::Debug:
				logLevel = "Debug";
				break;
			case LogLevel::Info:
				logLevel = "Info";
				break;
			case LogLevel::Warning:
				logLevel = "Warning";
				break;
			case LogLevel::Error:
				logLevel = "Error";
				break;
		}
		
		std::cout << logLevel + "\t" + ArrayUtils::ToString(tags) + "\t" + message;
	}
}
