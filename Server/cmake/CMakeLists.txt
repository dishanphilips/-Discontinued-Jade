# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("JadeServer")

add_executable (JadeServer "Server/src/Version.cpp")

target_sources(JadeServer
	PRIVATE
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/Server/include/Version.h"
		
		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/Server/include/Server/Server.h"
	
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/Server/app/App.cpp"

		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/Server/src/Version.cpp"

		# Server
		${CMAKE_CURRENT_SOURCE_DIR}"/Server/src/Server/Server.cpp"
)

# Link Jade Core
target_link_libraries(JadeServer JadeCore)
