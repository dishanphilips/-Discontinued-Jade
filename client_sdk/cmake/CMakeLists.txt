# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade ClientSDK
project ("JadeClientSdk")

add_library(JadeClientSdk "client_sdk/source/version.cc")

target_sources(JadeClientSdk
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/client_sdk/include/version.h"
	PRIVATE
)

# Link Jade Core
target_link_libraries(JadeClientSdk JadeCore)
