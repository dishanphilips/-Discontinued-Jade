#include <string>
#include <iostream>

#include "../../include/logger/console_appender.h"
#include "../../include/logger/logger.h"
#include "../../include/logger/log_level.h"
#include "../../include/utils/date_time_utils.h"
#include "../../include/utils/string_utils.h"
#include "../../include/utils/vector_utils.h"

namespace jade_core
{
	void console_appender::append(log_level level, std::string message, std::string tags)
	{
		std::vector<std::string> tag_vector = string_utils::split(tags, ',', "[", "]");
		std::cout << date_time_utils::get_current_date_time() + "\t" + logger::log_level_to_string(level) + 
			"\t" + vector_utils::to_string(tag_vector, "") + "\t" + message + "\n";
	}
}
