#include <string>
#include <iostream>

#include "../../include/Logger/ConsoleAppender.h"
#include "../../include/Logger/LogLevel.h"
#include "../../include/Utils/StringUtils.h"
#include "../../include/Utils/VectorUtils.h"

namespace JadeCore
{
	void ConsoleAppender::Append(LogLevel level, std::string message, std::string tags)
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

		std::vector<std::string> tagVector = StringUtils::Split(tags, ',', "[", "]");
		std::cout << logLevel + "\t" + VectorUtils::ToString(tagVector, "") + "\t" + message;
	}
}
