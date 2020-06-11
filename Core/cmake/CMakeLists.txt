# CMakeList.txt : CMake project for Jade, include source and define
#
cmake_minimum_required (VERSION 3.8)

#Jade Core
project ("JadeCore")

add_library (JadeCore "Core/src/Version.cpp")

target_sources(JadeCore
	PUBLIC
		# Version
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Version.h"

		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Logger/LogLevel.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Logger/Logger.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Logger/ILogAppender.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Logger/ConsoleAppender.h"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/StringUtils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/ArrayUtils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/VectorUtils.h"
	PRIVATE
		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Logger/Logger.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Logger/ConsoleAppender.cpp"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/StringUtils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/ArrayUtils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/VectorUtils.cpp"
)

target_include_directories(JadeCore
    PUBLIC 
        $<INSTALL_INTERFACE:include>    
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# TODO: Add tests and install targets if needed.
