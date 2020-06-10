# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade LoadBalancer
project ("JadeLoadBalancer")
file(GLOB jade_load_balancer_source_files
    "LoadBalancer/*.cpp"
    "LoadBalancer/*.h"
    "LoadBalancer/*/*.cpp"
    "LoadBalancer/*/*.h"
)
add_executable (JadeLoadBalancer ${jade_load_balancer_source_files})

# TODO: Add tests and install targets if needed.
