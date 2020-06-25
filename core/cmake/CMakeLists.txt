# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("JadeCore")

add_library (JadeCore "core/source/version.cc")

target_sources(JadeCore
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/jadecore.h"

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
										  
		# Command						  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/command/i_command_handler.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/include/command/command_executor.h"
										  
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
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/logger/logger.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/logger/console_appender.cc"
										  
		# Ticker						  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/tick/ticker.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/tick/tickable_base.cc"
										  
		# Task							  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/task/task_base.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/task/task_manager.cc"
										  
		# Startup						  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/startup/startup_task.cc"
										  
		# Command						  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/command/command_executor.cc"
										  
		# Utils							  
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/utils/string_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/utils/array_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/utils/vector_utils.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/utils/date_time_utils.cc"

		# Proto
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.pb.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/gen/server.grpc.pb.cc"
)

find_package(gRPC CONFIG REQUIRED)
target_link_libraries(JadeCore PUBLIC gRPC::gpr gRPC::grpc gRPC::grpc++ gRPC::grpc++_alts c-ares::cares)