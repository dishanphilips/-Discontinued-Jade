#pragma once

#include "../../../Core/include/Tick/Ticker.h"
#include "../../../Core/include/Logger/Logger.h"
#include "../../../Core/include/Logger/ConsoleAppender.h"

#include "../../include/Server/Server.h"

namespace JadeServer
{
	Server::Server() : TickableBase()
	{
		const auto appender = new JadeCore::ConsoleAppender();
		JadeCore::Logger::RegisterAppender(appender);
		JadeCore::Logger::LogInfo("Server Starting", "Startup,Server");
		JadeCore::Ticker::Start();
	}
		
	void Server::Tick()
	{
		JadeCore::Logger::LogInfo("Server Running...", "Server");
	}
}
