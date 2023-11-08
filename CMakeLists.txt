#setting the minimum required version of cmake
cmake_minimum_required(VERSION 3.6)
#naming the project
project(calculator)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

# Use the package PkgConfig to detect GTK+ headers/library files
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
include_directories(${GTK3_INCLUDE_DIRS})
link_directories(${GTK3_LIBRARY_DIRS})
# Add other flags to the compiler
add_definitions(${GTK3_CFLAGS_OTHER})

add_executable(calculator gui.c
        gui.h
        main.c
        main.h
        gui.c
        gui.c
        gui.h)

target_link_libraries(calculator ${GTK3_LIBRARIES})