# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
include(${CMAKE_CURRENT_SOURCE_DIR}/Core/cmake/CMakeLists.txt)

#Jade Server
include(${CMAKE_CURRENT_SOURCE_DIR}/Server/cmake/CMakeLists.txt)

#Jade LoadBalancer
include(${CMAKE_CURRENT_SOURCE_DIR}/LoadBalancer/cmake/CMakeLists.txt)

#Jade ClientSDK
include(${CMAKE_CURRENT_SOURCE_DIR}/ClientSDK/cmake/CMakeLists.txt)

#Jade JadeConsoleClient
include(${CMAKE_CURRENT_SOURCE_DIR}/ConsoleClient/cmake/CMakeLists.txt)

# TODO: Add tests and install targets if needed.
