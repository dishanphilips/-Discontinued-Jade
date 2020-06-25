#include <string>
#include <iostream>
#include <vector>

#include "../../include/logger/console_appender.h"
#include "../../include/logger/logger.h"
#include "../../include/utils/date_time_utils.h"
#include "../../include/utils/string_utils.h"
#include "../../include/utils/vector_utils.h"

namespace JadeCore
{
	void ConsoleAppender::Append(LogLevel level, std::string message, std::string tags)
	{
		std::vector<std::string> tag_vector = StringUtils::Split(tags, ',', "[", "]");

		_logs.push_back(
			DateTimeUtils::GetCurrentDateTime() + "\t" + 
			Logger::LogLevelToString(level) + "\t" + 
			VectorUtils::ToString(tag_vector, "") + "\t" + 
			message + "\n");
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
