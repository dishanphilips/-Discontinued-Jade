# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade LoadBalancer
project ("jade_load_balancer")

add_executable (jade_load_balancer "load_balancer/src/version.cpp")

target_sources(jade_load_balancer
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/load_balancer/include/version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/load_balancer/app/app.cpp"
)

# Link Jade Core
target_link_libraries(jade_load_balancer jade_core)
