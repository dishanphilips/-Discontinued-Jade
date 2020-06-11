#pragma once

#ifndef JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_
#define JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_

#include <string>

namespace JadeCore
{
	static class DateTimeUtils
	{
	public:
		
		/**
		 * \brief Get a string format of the current data time
		 * \return 
		 */
		static std::string GetCurrentDateTime();
	};
}

#endif
