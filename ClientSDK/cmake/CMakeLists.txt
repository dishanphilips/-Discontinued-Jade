# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade ClientSDK
project ("JadeClientSDK")

add_library(JadeClientSDK "ClientSDK/src/Version.cpp")

target_sources(JadeClientSDK
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/ClientSDK/include/Version.h"
	PRIVATE
)

# Link Jade Core
target_link_libraries(JadeClientSDK JadeCore)
