# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("JadeServer")

add_executable (JadeServer "server/src/version.cc")

target_sources(JadeServer
	PUBLIC
		
		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/jadeserver.h"

	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/server/app/app.cc"

		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/version.cc"

		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/server/server.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/server/server.cc"
		
		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/startup/startup_task.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/startup/startup_task.cc"

		# RPC
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_status.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_base.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_base_t.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_registry.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_base.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc_handler_registry.cc"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/rpc/rpc.cc"

		# RPC Handlers
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/handler/info_handler.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/handler/info_handler.cc"
)

# Link Jade Core
target_link_libraries(JadeServer PRIVATE JadeCore)
