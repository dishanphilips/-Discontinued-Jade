#pragma once

#ifndef JADE_CORE_INCLUDE_UTILS_VECTORUTILS_H_
#define JADE_CORE_INCLUDE_UTILS_VECTORUTILS_H_

#include <string>
#include <vector>

namespace jade_core
{
	static class vector_utils
	{
	public:
		
		/**
		 * \brief Convert a vector of strings to a single string
		 * \param vector 
		 * \param delimiter 
		 * \return 
		 */
		static std::string to_string(std::vector<std::string> vector , std::string delimiter = ",");
	};
}

#endif