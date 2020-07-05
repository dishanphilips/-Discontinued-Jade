#pragma once

#ifndef JADE_CORE_INCLUDE_JADECORE_H_
#define JADE_CORE_INCLUDE_JADECORE_H_

/****************************** Logger ******************************/

#include "logger/log_level.h"
#include "logger/logger.h"
#include "logger/i_log_appender.h"
#include "logger/console_appender.h"

/****************************** Startup ******************************/

#include "startup/core_startup_task.h"

/****************************** Task ******************************/

#include "task/task_status.h"
#include "task/task_base.h"
#include "task/task_manager.h"

/****************************** Tick ******************************/

#include "tick/tickable_base.h"
#include "tick/ticker.h"

/****************************** Utils ******************************/

#include "utils/array_utils.h"
#include "utils/date_time_utils.h"
#include "utils/string_utils.h"
#include "utils/vector_utils.h"

/****************************** RPC ******************************/

#include "rpc/rpc_event.h"
#include "rpc/rpc_status.h"

/****************************** Command ******************************/

#include "command/i_command_handler.h"
#include "command/command_executor.h"

/****************************** Gen ******************************/
#include "../gen/server.pb.h"
#include "../gen/server.grpc.pb.h"

#endif
