cmake_minimum_required(VERSION 2.8)
project(Adventure)

set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_RPATH}:$$ORIGIN/../lib/:$ORIGIN/../lib/)

include_directories(inc)

add_subdirectory(lib)
set(libs adveng)

add_subdirectory(src)