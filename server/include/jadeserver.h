#pragma once

#ifndef JADE_SERVER_INCLUDE_JADESERVER_H_
#define JADE_SERVER_INCLUDE_JADESERVER_H_

/****************************** Server ******************************/

#include "../src/server/server.h"

/****************************** Startup ******************************/

#include "../src/startup/startup_task.h"

/****************************** RPC ******************************/

#include "../src/rpc/rpc.h"
#include "../src/rpc/rpc_handler_status.h"
#include "../src/rpc/rpc_handler_base.h"
#include "../src/rpc/rpc_handler_base_t.h"
#include "../src/rpc/rpc_handler_registry.h"

/****************************** Handler ******************************/

#include "../src/handler/info_handler.h"

#endif