########################################################
# cmake file for building Marlino
# @author Lagarde François, IPNL
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
########################################################
# project name
project(HistoGraphs)
# project version
SET( HistoGraphs_VERSION_MAJOR 0 )
SET( HistoGraphs_VERSION_MINOR 0 )
SET( HistoGraphs_VERSION_PATCH 1 )
include(CheckIncludeFiles)
include(CheckCXXCompilerFlag)
set (CMAKE_CXX_STANDARD 14)
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/build/include/")
set(LIBRARY_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/build/lib/")
SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/bin")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/build/include/)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall -ansi -fno-strict-aliasing -lpthread -ldl -lm -fPIC" )
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/Modules/)
list( APPEND CMAKE_MODULE_PATH $ENV{ROOTSYS}/etc/cmake/)
find_package(ROOT REQUIRED)
include_directories(${ROOT_INCLUDE_DIR})
configure_file ("${CMAKE_CURRENT_SOURCE_DIR}/src/Modules/Version.h.in" "${PROJECT_INCLUDE_DIR}/Version.h")
ADD_SUBDIRECTORY( src/fmt )
ADD_SUBDIRECTORY( src/HistoGraphs )
# add a target to generate API documentation with Doxygen
find_package(Doxygen)
option(BUILD_DOCUMENTATION "Create and install the HTML based API documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
    if(NOT DOXYGEN_FOUND)
        message(FATAL_ERROR "Doxygen is needed to build the documentation.")
    endif()
    set(doxyfile_in ${CMAKE_CURRENT_SOURCE_DIR}/src/Modules/Doxyfile.in)
    set(doxyfile ${CMAKE_CURRENT_SOURCE_DIR}/build/Doxyfile)
    configure_file(${doxyfile_in} ${doxyfile} @ONLY)
    add_custom_target(doc
        COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM)

    install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/doc/html DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/doc)
endif()
ADD_EXECUTABLE( Main ./src/main.cpp)
TARGET_LINK_LIBRARIES( Main Histographs)
INSTALL( TARGETS Main DESTINATION ${EXECUTABLE_OUTPUT_PATH} )  
