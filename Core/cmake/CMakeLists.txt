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

		# Ticker
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Tick/Ticker.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Tick/TickableBase.h"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/StringUtils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/ArrayUtils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/VectorUtils.h"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/include/Utils/DateTimeUtils.h"
	PRIVATE
		# Logger
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Logger/Logger.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Logger/ConsoleAppender.cpp"

		# Ticker
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Tick/Ticker.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Tick/TickableBase.cpp"

		# Utils
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/StringUtils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/ArrayUtils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/VectorUtils.cpp"
		${CMAKE_CURRENT_SOURCE_DIR}"/Core/src/Utils/DateTimeUtils.cpp"
)

# TODO: Add tests and install targets if needed.
