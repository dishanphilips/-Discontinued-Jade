#pragma once

#include "../../Core/include/Logger.h"
#include "../../Core/include/ConsoleAppender.h"

int main(int, char* [])
{
	JadeCore::ConsoleAppender* appender = new JadeCore::ConsoleAppender();
	JadeCore::Logger::RegisterAppender(appender);
	JadeCore::Logger::LogInfo("Hello, Jade Server!", new std::string[1]{ "Startup" });
}