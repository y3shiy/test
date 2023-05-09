cmake_minimum_required(VERSION 3.20)

project(CMakeTestProgram CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(inoutlib)

add_executable(CMakeTestProgram main.cpp)

target_link_libraries(CMakeTestProgram PRIVATE inoutlib)