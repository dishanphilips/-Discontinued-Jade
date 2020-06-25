# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("JadeServer")

add_executable (JadeServer "server/source/version.cc")

target_sources(JadeServer
	PUBLIC
		
		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/jadeserver.h"
													
		# Server							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/server/server.h"
											
		# Startup							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/startup/startup_task.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/startup/command_startup.h"
											
		# RPC								
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/rpc/rpc_handler_status.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/rpc/rpc.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/rpc/rpc_handler.h"
											
		# Command							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/command/info_command_handler.h"

	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/server/app/app.cc"

		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/version.cc"
											
		# Server							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/server/server.cc"
											
		# Startup							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/startup/startup_task.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/startup/command_startup.cc"
											
		# RPC								
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/rpc/rpc.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/rpc/rpc_handler.cc"
											
		# Command							
		${CMAKE_CURRENT_SOURCE_DIR}"/server/source/command/info_command_handler.cc"
)

# Link Jade Core
target_link_libraries(JadeServer PRIVATE JadeCore)
