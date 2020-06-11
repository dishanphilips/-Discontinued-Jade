#include "../../include/Utils/StringUtils.h"

std::vector<std::string> StringUtils::Split(std::string string, char delimiter, std::string prefix, std::string suffix)
{
	std::vector<std::string> split;
	std::string currentSplit;
	for (int stringIndex = 0; stringIndex < string.size(); ++stringIndex)
	{
		if(string[stringIndex] == delimiter)
		{
			split.push_back(prefix + currentSplit + suffix);
		}
		else
		{
			currentSplit += string[stringIndex];
		}
	}
	split.push_back(prefix + currentSplit + suffix);
	
	return split;
}
