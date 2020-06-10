#include <string>

#include "ArrayUtils.h"


namespace JadeCore
{
	std::string ArrayUtils::ToString(std::string array[], std::string delimiter = ",")
	{
		std::string arrayString = "";

		for (int arrayIndex = 0; arrayIndex < array->length(); ++arrayIndex)
		{
			arrayString += array[arrayIndex];

			if(arrayIndex < array->length() - 1)
			{
				arrayString += delimiter;
			}
		}

		return arrayString;
	}
}
