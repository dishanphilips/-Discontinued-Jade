#pragma once

#include <ctime>
#include <chrono>
#include <locale>
#include <ostream>
#include <sstream>

#include "../../include/Utils/date_time_utils.h"

namespace jade_core
{
	std::tm date_time_utils::now()
	{
		time_t now = time(0);
		return *localtime(&now);
	}

	std::ostream& date_time_utils::format(std::ostream& formatted, const std::tm& time, const char* format)
	{
		const std::time_put<char>& dateWriter = std::use_facet<std::time_put<char> >(formatted.getloc());
		int length = strlen(format);
		if (dateWriter.put(formatted, formatted, ' ', &time, format, format + length).failed()) {
			throw std::runtime_error("Could not format time!");
		}
		return formatted;
	}

	std::string date_time_utils::get_current_date_time(const char * date_time_format)
	{
		std::stringstream formatted;
		format(formatted, now(), date_time_format);
		return formatted.str();
	}
}
