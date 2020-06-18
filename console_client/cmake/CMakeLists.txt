# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade JadeConsoleClient
project ("JadeConsoleClient")

add_executable (JadeConsoleClient "console_client/src/version.cc")

target_sources(JadeConsoleClient
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/console_client/include/version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/console_client/app/app.cc"
)

# Link Jade Core
target_link_libraries(JadeConsoleClient JadeCore)
