#pragma once

#ifndef JADE_CORE_INCLUDE_JADECORE_H_
#define JADE_CORE_INCLUDE_JADECORE_H_

/****************************** Logger ******************************/

#include "../src/logger/log_level.h"
#include "../src/logger/logger.h"
#include "../src/logger/i_log_appender.h"
#include "../src/logger/console_appender.h"

/****************************** Startup ******************************/

#include "../src/startup/startup_task.h"

/****************************** Task ******************************/

#include "../src/task/task_status.h"
#include "../src/task/task_base.h"
#include "../src/task/task_manager.h"

/****************************** Tick ******************************/

#include "../src/tick/tickable_base.h"
#include "../src/tick/ticker.h"

/****************************** Utils ******************************/

#include "../src/utils/array_utils.h"
#include "../src/utils/date_time_utils.h"
#include "../src/utils/string_utils.h"
#include "../src/utils/vector_utils.h"

/****************************** Command ******************************/

#include "../src/command/i_command_handler.h"
#include "../src/command/command_executor.h"

/****************************** Gen ******************************/
#include "../gen/server.pb.h"
#include "../gen/server.grpc.pb.h"

#endif
