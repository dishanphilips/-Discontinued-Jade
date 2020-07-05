# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("JadeCore")

add_library (JadeCore "core/source/version.cc")

# Include Directories
include_directories(JadeCore 
	PUBLIC
		"${CMAKE_CURRENT_SOURCE_DIR}/core/include/"
)

target_sources(JadeCore
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
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/startup/core_startup_task.cc"

		# RPC
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/rpc/rpc_event.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/core/source/rpc/rpc_status.cc"
						
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

# Link Grpc
find_package(gRPC CONFIG REQUIRED)
target_link_libraries(JadeCore PUBLIC gRPC::gpr gRPC::grpc gRPC::grpc++ gRPC::grpc++_alts c-ares::cares)