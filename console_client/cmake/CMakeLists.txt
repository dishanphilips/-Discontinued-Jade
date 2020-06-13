# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade JadeConsoleClient
project ("jade_console_client")

add_executable (jade_console_client "console_client/src/version.cpp")

target_sources(jade_console_client
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/console_client/include/version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/console_client/app/app.cpp"
)

# Link Jade Core
target_link_libraries(jade_console_client jade_core)
