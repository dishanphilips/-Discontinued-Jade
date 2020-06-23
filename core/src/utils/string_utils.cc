#include "string_utils.h"

namespace JadeCore
{
	std::vector<std::string> StringUtils::Split(std::string string, char delimiter, std::string prefix, std::string suffix)
	{
		std::vector<std::string> split;
		std::string current_split;
		for (int stringIndex = 0; stringIndex < string.size(); ++stringIndex)
		{
			if (string[stringIndex] == delimiter)
			{
				split.push_back(prefix + current_split + suffix);
			}
			else
			{
				current_split += string[stringIndex];
			}
		}
		split.push_back(prefix + current_split + suffix);

		return split;
	}
}
