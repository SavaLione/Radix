message(STATUS "Run CMake")
cmake_minimum_required (VERSION 2.6)

set (SRC_CORE 1)
set (SRC_IO 1)

message(STATUS "Radix project")

if (WIN32)
    message (STATUS "WIN32 All is well")
endif (WIN32)
if (UNIX)
    message (WARNING "Unix! Radix only work on windows")
endif (UNIX)

set (PROJECT Radix)

set( CMAKE_BUILD_TYPE RELEASE )
message(STATUS "Bild type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "Bild types: DEBUG RELEASE RELWITHDEBINFO MINSIZEREL")

project (${PROJECT})
if (SRC_CORE)
	message(STATUS "---------[CORE]------------")
	set (CORE_HEADERS
		src/core/CheckingConnections.h
		src/core/Constants.h
		src/core/Initialization.h
		src/core/Radix.h
		src/core/ADB_mod.h)
	set (CORE_SOURCES
		src/core/Main.cpp
		src/core/CheckingConnections.cpp
		src/core/Initialization.cpp
		src/core/Radix.cpp
		src/core/Standards.cpp
		src/core/ADB_mod.cpp)
	message(STATUS ${CORE_HEADERS})
	message(STATUS ${CORE_SOURCES})
endif()
if (SRC_IO)
	message(STATUS "-----------[IO]------------")
	set (IO_HEADERS
		src/io/Download.h
		src/io/Ip.h
		src/io/Logger.h
		src/io/Settings.h
		src/io/Templates.h)
	set (IO_SOURCES
		src/io/Download.cpp
		src/io/Ip.cpp
		src/io/Logger.cpp
		src/io/Settings.cpp
		src/io/Templates.cpp)
	message(STATUS ${IO_HEADERS})
	message(STATUS ${IO_SOURCES})
endif()
message(STATUS "---------------------------")
add_executable (${PROJECT} ${CORE_HEADERS} ${CORE_SOURCES} ${IO_HEADERS} ${IO_SOURCES})
message(STATUS "Stop CMake")
