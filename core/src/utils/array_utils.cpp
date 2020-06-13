#include <string>

#include "../../include/utils/array_utils.h"

namespace jade_core
{
	std::string array_utils::to_string(std::string array[], const std::string& delimiter)
	{
		std::string array_string = "";

		for (int arrayIndex = 0; arrayIndex < array->size(); ++arrayIndex)
		{
			array_string += array[arrayIndex];

			if(arrayIndex < array->length() - 1)
			{
				array_string += delimiter;
			}
		}

		return array_string;
	}
}
