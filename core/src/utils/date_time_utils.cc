#pragma once

#include <ctime>
#include <chrono>
#include <locale>
#include <ostream>
#include <sstream>

#include "date_time_utils.h"

namespace JadeCore
{
	std::tm DateTimeUtils::Now()
	{
		time_t now = time(0);
		return *localtime(&now);
	}

	std::ostream& DateTimeUtils::Format(std::ostream& formatted, const std::tm& time, const char* format)
	{
		const std::time_put<char>& dateWriter = std::use_facet<std::time_put<char> >(formatted.getloc());
		int length = strlen(format);
		if (dateWriter.put(formatted, formatted, ' ', &time, format, format + length).failed()) {
			throw std::runtime_error("Could not format time!");
		}
		return formatted;
	}

	std::string DateTimeUtils::GetCurrentDateTime(const char * date_time_format)
	{
		std::stringstream formatted;
		Format(formatted, Now(), date_time_format);
		return formatted.str();
	}
}
