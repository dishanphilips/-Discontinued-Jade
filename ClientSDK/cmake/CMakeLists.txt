# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade ClientSDK
project ("JadeClientSDK")
file(GLOB jade_client_sdk_source_files
    "ClientSDK/*.cpp"
    "ClientSDK/*.h"
    "ClientSDK/*/*.cpp"
    "ClientSDK/*/*.h"
)
add_library (JadeClientSDK ${jade_client_sdk_source_files})

# TODO: Add tests and install targets if needed.
