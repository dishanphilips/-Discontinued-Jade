# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("JadeServer")

add_executable (JadeServer "server/source/version.cc")

# Include Directories
include_directories(JadeServer 
	PRVATE
		"${CMAKE_CURRENT_SOURCE_DIR}/core/include/"
		"${CMAKE_CURRENT_SOURCE_DIR}/server/include/"
)

target_sources(JadeServer
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
