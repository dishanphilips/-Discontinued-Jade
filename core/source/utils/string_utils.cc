#include "../../include/utils/string_utils.h"

#include <cstdarg>
#include <memory>
#include <stdexcept>

using std::string;
using std::unique_ptr;
using std::vector;

namespace JadeCore
{
	std::vector<std::string> StringUtils::Split(string string, char delimiter, std::string prefix, std::string suffix)
	{
		vector<std::string> split;
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

	string StringUtils::Format(const string format, va_list args)
	{
		// Get the size of the buffer
		size_t size = snprintf(nullptr, 0, format.c_str(), *args) + 1;

		if (size > 0)
		{
			unique_ptr<char[]> buffer(new char[size]);
			snprintf(buffer.get(), size, format.c_str(), *args);
			return string(buffer.get(), buffer.get() + size - 1);
		}
		else
		{
			throw std::runtime_error("Error during formatting.");
		}
	}

	std::string StringUtils::Format(const string format, ...)
	{
		// Get the arguments required to format
		va_list args;
		va_start(args, format);

		// Format with the given arguments
		return Format(format, args);
	}
}
