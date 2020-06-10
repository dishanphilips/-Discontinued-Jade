#include <string>
#include <iostream>

#include "ConsoleAppender.h"
#include "../LogLevel.h"
#include "../../Utils/ArrayUtils.h"

namespace JadeCore
{
	void ConsoleAppender::Append(LogLevel level, std::string tags[], std::string message)
	{
		std::cout << level + "\t" + ArrayUtils::ToString(tags) + "\t" + message;
	}
}
