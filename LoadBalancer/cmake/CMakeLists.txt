# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade LoadBalancer
project ("JadeLoadBalancer")

project ("JadeLoadBalancer")

add_executable (JadeLoadBalancer "LoadBalancer/src/Version.cpp")

target_sources(JadeLoadBalancer
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/LoadBalancer/include/Version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/LoadBalancer/app/App.cpp"
)

# Link Jade Core
target_link_libraries(JadeLoadBalancer JadeCore)
