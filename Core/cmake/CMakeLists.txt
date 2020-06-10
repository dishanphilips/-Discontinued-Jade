# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("JadeCore")
file(GLOB jade_core_source_files
    "Core/*.cpp"
    "Core/*.h"
    "Core/*/*.cpp"
    "Core/*/*.h"
)
add_library (JadeCore ${jade_core_source_files})

# TODO: Add tests and install targets if needed.
