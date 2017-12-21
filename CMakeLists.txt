message(STATUS "Run CMake")
cmake_minimum_required (VERSION 2.6)

set (SRC_CORE 1)
set (SRC_IO 1)
set (SRC_UI 1)

message(STATUS "Radix project")

if (WIN32)
    message (STATUS "WIN32 All is well")
    set (WINDOWS 1)
endif (WIN32)
if (UNIX)
    message (WARNING "Unix! Radix only work on windows")
    set (WINDOWS 0)
endif (UNIX)

set (PROJECT Radix)

set_property( GLOBAL PROPERTY USE_FOLDERS ON )
set( CMAKE_SUPPRESS_REGENERATION true)
set( CMAKE_BUILD_TYPE RELEASE )
set( CMAKE_CONFIGURATION_TYPES "Release;Debug" )
message(STATUS "Bild type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "Configuration type:  " ${CMAKE_BUILD_TYPE})
message(STATUS "---------[CHECK]-----------" )
message(STATUS "[CMAKE_SUPPRESS_REGENERATION " ${USE_FOLDERS} "]" "[CMAKE_BUILD_TYPE " ${CMAKE_BUILD_TYPE} "]" "[CMAKE_CONFIGURATION_TYPES " ${CMAKE_CONFIGURATION_TYPES} "]" )
message(STATUS "--------[PROJECT]----------" )
project (${PROJECT})
if (WINDOWS)
	if (SRC_CORE)
		message(STATUS "---------[CORE]------------")
		set (CORE_HEADERS
			src/core/ADB_mod.h
			src/core/CheckingFiles.h
			src/core/Color.h
			src/core/Constants.h
			src/core/Operations.h)
		set (CORE_SOURCES
			src/core/ADB_mod.cpp
			src/core/CheckingFiles.cpp
			src/core/Color.cpp
			src/core/Main.cpp
			src/core/Operations.cpp)
		message(STATUS ${CORE_HEADERS})
		message(STATUS ${CORE_SOURCES})
	endif()
	if (SRC_IO)
		message(STATUS "-----------[IO]------------")
		set (IO_HEADERS
			src/io/Logger.h
			src/io/Settings.h
			src/io/Templates.h)
		set (IO_SOURCES
			src/io/Logger.cpp
			src/io/Settings.cpp
			src/io/Templates.cpp)
		message(STATUS ${IO_HEADERS})
		message(STATUS ${IO_SOURCES})
	endif()
	if (SRC_UI)
		message(STATUS "-----------[UI]------------")
		set (UI_HEADERS
			src/ui/Items.h
			src/ui/Menu.h)
		set (UI_SOURCES
			src/ui/Items.cpp
			src/ui/Menu.cpp)
		message(STATUS ${UI_HEADERS})
		message(STATUS ${UI_SOURCES})
	endif()
	message(STATUS "---------------------------")
	add_executable (${PROJECT} ${CORE_HEADERS} ${CORE_SOURCES} ${IO_HEADERS} ${IO_SOURCES} ${UI_HEADERS} ${UI_SOURCES})
endif()

if (UNIX)
	message(STATUS "Unix is not supported")
	message(STATUS "---------[EXAMPLES]----------")
	set (UNIX_SOURCES examples/Unix.cpp)
	add_executable (${PROJECT} ${UNIX_SOURCES})
	message(STATUS "---------------------------")
endif()
message(STATUS "Stop CMake")
