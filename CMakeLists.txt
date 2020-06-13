# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

project(jade)

#Jade Core
include(${CMAKE_CURRENT_SOURCE_DIR}/core/cmake/CMakeLists.txt)

#Jade Server
include(${CMAKE_CURRENT_SOURCE_DIR}/server/cmake/CMakeLists.txt)

#Jade LoadBalancer
include(${CMAKE_CURRENT_SOURCE_DIR}/load_balancer/cmake/CMakeLists.txt)

#Jade ClientSDK
include(${CMAKE_CURRENT_SOURCE_DIR}/client_sdk/cmake/CMakeLists.txt)

#Jade JadeConsoleClient
include(${CMAKE_CURRENT_SOURCE_DIR}/console_client/cmake/CMakeLists.txt)

# TODO: Add tests and install targets if needed.
