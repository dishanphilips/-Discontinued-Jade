#include <string>
#include <iostream>
#include <vector>
#include <cstdarg>

#include "logger/logger.h"
#include "logger/console_appender.h"
#include "utils/date_time_utils.h"
#include "utils/string_utils.h"
#include "utils/vector_utils.h"

namespace JadeCore
{
	void ConsoleAppender::Append(LogLevel level, string tags, string message, va_list args)
	{
		std::vector<std::string> tag_vector = StringUtils::Split(tags, ',', "[", "]");
		_logs.push_back(
			DateTimeUtils::GetCurrentDateTime() + "\t" + 
			Logger::LogLevelToString(level) + "\t" + 
			VectorUtils::ToString(tag_vector, "") + "\t" + 
			StringUtils::Format(message, args) + "\n");
	}

	void ConsoleAppender::Tick()
	{
		for (std::string log : _logs)
		{
			std::cout << log;
		}

		_logs.clear();
	}
}
