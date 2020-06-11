#pragma once

#include "../../Core/include/Logger/Logger.h"
#include "../../Core/include/Logger/ConsoleAppender.h"

int main(int, char* [])
{
	const auto appender = new JadeCore::ConsoleAppender();
	JadeCore::Logger::RegisterAppender(appender);
	JadeCore::Logger::LogInfo("Hello, Jade Server!", "Startup,Server");
}