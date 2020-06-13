# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("jade_server")

add_executable (jade_server "server/src/version.cpp")

target_sources(jade_server
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/version.h"
		
		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/server/server.h"

		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/server/include/startup/startup_task.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/server/app/app.cpp"

		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/version.cpp"

		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/server/server.cpp"

		# Startup
		${CMAKE_CURRENT_SOURCE_DIR}"/server/src/startup/startup_task.cpp"
)

# Link Jade Core
target_link_libraries(jade_server jade_core)
