cmake_minimum_required(VERSION 3.15)
project(lingdist LANGUAGES C)

find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
find_package(Cython REQUIRED)

# Sources for the extension
set(SOURCES
    lingdist.pyx
    lib/linglib.c
)

# Build extension with Cython
cython_add_module(lingdist ${SOURCES})

# Add include dirs for headers
target_include_directories(lingdist PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib)
