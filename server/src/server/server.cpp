#pragma once

#include "../../../Core/include/tick/ticker.h"
#include "../../../Core/include/logger/logger.h"
#include "../../../Core/include/logger/console_appender.h"

#include "../../include/Server/Server.h"

namespace jade_server
{
	server::server() : tickable_base()
	{
		const auto appender = new jade_core::console_appender();
		jade_core::logger::register_appender(appender);
		
		jade_core::logger::log_info("Server Starting", "Startup,Server");
		jade_core::ticker::start();
	}
		
	void server::tick()
	{
		jade_core::logger::log_info("Server Tick : ", "Server");
	}
}
