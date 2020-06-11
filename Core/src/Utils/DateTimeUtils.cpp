#pragma once

#include <ctime>

#include "../../include/Utils/DateTimeUtils.h"

#include <chrono>

namespace JadeCore
{
	std::string DateTimeUtils::GetCurrentDateTime()
	{
		std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
		return std::to_string(now);
	}
}
