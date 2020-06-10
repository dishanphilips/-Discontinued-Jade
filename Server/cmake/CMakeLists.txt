# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Server
project ("JadeServer")
file(GLOB jade_server_source_files
    "Server/*.cpp"
    "Server/*.h"
    "Server/*/*.cpp"
    "Server/*/*.h"
)
add_executable (JadeServer ${jade_server_source_files})

# Link Jade Core
target_link_libraries(JadeServer JadeCore)

# TODO: Add tests and install targets if needed.
