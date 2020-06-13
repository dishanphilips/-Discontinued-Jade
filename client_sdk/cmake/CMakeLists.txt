# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade ClientSDK
project ("jade_client_sdk")

add_library(jade_client_sdk "client_sdk/src/version.cpp")

target_sources(jade_client_sdk
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/client_sdk/include/version.h"
	PRIVATE
)

# Link Jade Core
target_link_libraries(jade_client_sdk jade_core)
