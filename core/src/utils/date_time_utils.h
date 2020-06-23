#pragma once

#ifndef JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_
#define JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_

#include <stdexcept>
#include <string>

namespace JadeCore
{
	static class DateTimeUtils
	{
	public:

		/**
		 * \brief Get current time 
		 * \return 
		 */
		static std::tm Now();

		/**
		 * \brief 
		 * \param formatted Format a given date and time
		 * \param time 
		 * \param format 
		 * \return 
		 */
		static std::ostream& Format(std::ostream& formatted, const tm& time, const char* format);
		
		/**
		 * \brief Get a string format of the current data time
		 * \param format 
		 * \return 
		 */
		static std::string GetCurrentDateTime(const char* format = "%A %B, %d %Y %H:%M:%S");
	};
}

#endif
