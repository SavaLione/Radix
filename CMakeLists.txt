message(STATUS "Run CMake")

cmake_minimum_required (VERSION 2.6)

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
message(STATUS "---------------------------")
set (HEADERS 
	src/core/CheckingConnections.h
	src/core/Constants.h
	src/core/Initialization.h
	src/core/Radix.h
	src/io/Download.h
	src/io/Ip.h
	src/io/Logger.h
	src/io/Settings.h
	src/io/Templates.h)
message(STATUS ${HEADERS})
message(STATUS "---------------------------")
set (SOURCES
	src/core/Main.cpp
	src/core/CheckingConnections.cpp
	src/core/Initialization.cpp
	src/core/Radix.cpp
	src/core/Standards.cpp
	src/io/Download.cpp
	src/io/Ip.cpp
	src/io/Logger.cpp
	src/io/Settings.cpp
	src/io/Templates.cpp)
message(STATUS ${SOURCES})
message(STATUS "---------------------------")
add_executable (${PROJECT} ${HEADERS} ${SOURCES})
message(STATUS "Stop CMake")