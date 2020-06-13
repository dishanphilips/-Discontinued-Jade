#pragma once

#ifndef JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_
#define JADE_CORE_INCLUDE_UTILS_DATETIMEUTILS_H_

#include <stdexcept>
#include <string>

namespace jade_core
{
	static class date_time_utils
	{
	public:

		/**
		 * \brief Get current time 
		 * \return 
		 */
		static std::tm now();

		/**
		 * \brief 
		 * \param formatted Format a given date and time
		 * \param time 
		 * \param format 
		 * \return 
		 */
		static std::ostream& format(std::ostream& formatted, const tm& time, const char* format);
		
		/**
		 * \brief Get a string format of the current data time
		 * \param format 
		 * \return 
		 */
		static std::string get_current_date_time(const char* format = "%A %B, %d %Y %I:%M%p");
	};
}

#endif
