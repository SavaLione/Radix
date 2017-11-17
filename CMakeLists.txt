cmake_minimum_required ( VERSION 2.6 )

project ( radix )

set ( SRC_DIR ${PROJECT_SOURCE_DIR}/src )

set ( APP_NAME radix )

# DEBUG|RELEASE|RELWITHDEBINFO|MINSIZEREL
set( CMAKE_BUILD_TYPE RELEASE )

# Заголовки
#include_directories ( ${SRC_DIR}/headers_N )
#------------------------------------------------------------
include_directories ( ${SRC_DIR}/core/CheckingConnections.h )
include_directories ( ${SRC_DIR}/core/Constants.h )
include_directories ( ${SRC_DIR}/core/Initialization.h )
include_directories ( ${SRC_DIR}/core/Radix.h )

include_directories ( ${SRC_DIR}/io/Download.h )
include_directories ( ${SRC_DIR}/io/Ip.h )
include_directories ( ${SRC_DIR}/io/Logger.h )
include_directories ( ${SRC_DIR}/io/Settings.h )
include_directories ( ${SRC_DIR}/io/Templates.h )
#------------------------------------------------------------

# Библиотеки для линковки проекта
#link_directories ( /path/to/lib_N )

# Исходники *.cpp
# list(APPEND SRC ${SRC_DIR}/file_N.cpp )
#------------------------------------------------------------
list(APPEND SRC ${SRC_DIR}/core/CheckingConnections.cpp )
list(APPEND SRC ${SRC_DIR}/core/Initialization.cpp )
list(APPEND SRC ${SRC_DIR}/core/Main.cpp )
list(APPEND SRC ${SRC_DIR}/core/Radix.cpp )
list(APPEND SRC ${SRC_DIR}/core/Standards.cpp )

list(APPEND SRC ${SRC_DIR}/io/Download.cpp )
list(APPEND SRC ${SRC_DIR}/io/Ip.cpp )
list(APPEND SRC ${SRC_DIR}/io/Logger.cpp )
list(APPEND SRC ${SRC_DIR}/io/Settings.cpp )
list(APPEND SRC ${SRC_DIR}/io/Templates.cpp )
#------------------------------------------------------------

add_executable ( ${APP_NAME} ${SRC} )

# Библиотеки для линковки проекта
#target_link_libraries( ${APP_NAME} name_N )