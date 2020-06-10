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

#Jade Server
project ("JadeServer")
file(GLOB jade_server_source_files
    "Server/*.cpp"
    "Server/*.h"
    "Server/*/*.cpp"
    "Server/*/*.h"
)
add_executable (JadeServer ${jade_server_source_files})

#Jade LoadBalancer
project ("JadeLoadBalancer")
file(GLOB jade_load_balancer_source_files
    "LoadBalancer/*.cpp"
    "LoadBalancer/*.h"
    "LoadBalancer/*/*.cpp"
    "LoadBalancer/*/*.h"
)
add_executable (JadeLoadBalancer ${jade_load_balancer_source_files})

#Jade ClientSDK
project ("JadeClientSDK")
file(GLOB jade_client_sdk_source_files
    "ClientSDK/*.cpp"
    "ClientSDK/*.h"
    "ClientSDK/*/*.cpp"
    "ClientSDK/*/*.h"
)
add_library (JadeClientSDK ${jade_client_sdk_source_files})

#Jade JadeConsoleClient
project ("JadeConsoleClient")
file(GLOB jade_console_client_source_files
    "ConsoleClient/*.cpp"
    "ConsoleClient/*.h"
    "ConsoleClient/*/*.cpp"
    "ConsoleClient/*/*.h"
)
add_executable (JadeConsoleClient ${jade_console_client_source_files})

# TODO: Add tests and install targets if needed.
