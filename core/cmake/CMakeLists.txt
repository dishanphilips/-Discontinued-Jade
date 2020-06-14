# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("jade_core")

add_library (jade_core "core/src/Version.cpp")

target_sources(jade_core
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/version.h"

		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/logger/log_level.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/logger/logger.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/logger/i_log_appender.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/logger/console_appender.h"

		# Ticker
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/tick/ticker.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/tick/tickable_base.h"

		# Task
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/task/task_status.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/task/task_base.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/task/task_manager.h"

		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/startup/startup_task.h"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/utils/string_utils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/utils/array_utils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/utils/vector_utils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/utils/date_time_utils.h"
	PRIVATE
		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/logger/logger.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/logger/console_appender.cpp"

		# Ticker
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/tick/ticker.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/tick/tickable_base.cpp"

		# Task
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/task/task_base.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/task/task_manager.cpp"

		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/startup/startup_task.cpp"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/string_utils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/array_utils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/vector_utils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/date_time_utils.cpp"
)

# TODO: Add tests and install targets if needed.
