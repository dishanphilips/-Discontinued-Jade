#pragma once

#ifndef JADE_CORE_INCLUDE_UTILS_STRINGUTILS_H_
#define JADE_CORE_INCLUDE_UTILS_STRINGUTILS_H_

#include <string>
#include <vector>

using std::string;

namespace JadeCore
{
	static class StringUtils
	{
	public:

		/**
		 * \brief Splits a provided string with the given delimiter
		 * \param string
		 * \param delimiter
		 * \param prefix
		 * \param suffix
		 * \return
		 */
		static std::vector<std::string> Split(string string, char delimiter, std::string prefix = "", std::string suffix = "");

		/**
		 * \brief Format a given string with the arguments provided
		 * \param format
		 * \param args
		 * \return
		 */
		static std::string Format(const std::string format, va_list args);
		
		/**
		 * \brief Format a given string with the arguments provided
		 * \param format 
		 * \param ... 
		 * \return 
		 */
		static std::string Format(const std::string format, ...);
	};

}
#endif
