# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade JadeConsoleClient
project ("JadeConsoleClient")

add_executable (JadeConsoleClient "ConsoleClient/src/Version.cpp")

target_sources(JadeConsoleClient
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/ConsoleClient/include/Version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/ConsoleClient/app/App.cpp"
)

# Link Jade Core
target_link_libraries(JadeConsoleClient JadeCore)
