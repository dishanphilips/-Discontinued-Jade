#pragma once

#include "../../../Core/include/logger/logger.h"
#include "../../../Core/include/tick/ticker.h"

#include "../../include/Server/Server.h"

namespace jade_server
{
	server::server() : tickable_base()
	{
		_startup = new jade_server::startup_task();
		_task_manager.run(_startup);
		
		jade_core::logger::log_info("Server Starting", "Startup,Server");
		jade_core::ticker::start();
	}
		
	void server::tick()
	{
		jade_core::logger::log_info("Server Tick : ", "Server");
	}
}
