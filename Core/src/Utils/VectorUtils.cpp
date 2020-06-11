#include <string>

#include "../../include/Utils/VectorUtils.h"

namespace JadeCore
{
	std::string VectorUtils::ToString(std::vector<std::string> vector, const std::string delimiter)
	{
		std::string arrayString = "";

		for (int arrayIndex = 0; arrayIndex < vector.size(); ++arrayIndex)
		{
			arrayString += vector[arrayIndex];

			if(arrayIndex < vector.size() - 1)
			{
				arrayString += delimiter;
			}
		}

		return arrayString;
	}
}
