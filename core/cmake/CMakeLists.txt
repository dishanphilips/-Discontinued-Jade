# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("JadeCore")

add_library (JadeCore "core/src/version.cc")

target_sources(JadeCore
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

		# Proto
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.pb.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.grpc.pb.h"

	PRIVATE
		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/logger/logger.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/logger/console_appender.cc"

		# Ticker
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/tick/ticker.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/tick/tickable_base.cc"

		# Task
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/task/task_base.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/task/task_manager.cc"

		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/startup/startup_task.cc"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/string_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/array_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/vector_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/src/utils/date_time_utils.cc"

		# Proto
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.pb.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.grpc.pb.cc"
)

find_package(gRPC CONFIG REQUIRED)
target_link_libraries(JadeCore PUBLIC gRPC::gpr gRPC::grpc gRPC::grpc++ gRPC::grpc++_alts c-ares::cares)