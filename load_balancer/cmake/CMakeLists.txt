# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade LoadBalancer
project ("JadeLoadBalancer")

add_executable (JadeLoadBalancer "load_balancer/source/version.cc")

target_sources(JadeLoadBalancer
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/load_balancer/include/version.h"
	PRIVATE
		# App
		${CMAKE_CURRENT_SOURCE_DIR}"/load_balancer/app/app.cc"
)

# Link Jade Core
target_link_libraries(JadeLoadBalancer JadeCore)
