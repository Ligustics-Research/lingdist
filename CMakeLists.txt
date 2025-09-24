cmake_minimum_required(VERSION 3.15)
project(lingdist LANGUAGES C)

find_package(Python REQUIRED COMPONENTS Interpreter Development.Module)
find_package(Cython REQUIRED)

# Build extension module
set(SOURCES
    src/lingdist/lingdist.pyx
    src/lingdist/lib/linglib.c
)

# Tell Cython to generate the C++ wrapper
cython_add_module(lingdist ${SOURCES})

# Add include dir for linglib.h
target_include_directories(lingdist PRIVATE src/lingdist/lib)
