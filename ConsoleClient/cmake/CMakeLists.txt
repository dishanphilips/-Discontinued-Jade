# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

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
