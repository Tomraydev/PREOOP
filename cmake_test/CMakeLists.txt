cmake_minimum_required (VERSION 2.8.9)

project (pesel_test)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(pesel_test ${SOURCES})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -g -pedantic -pedantic-errors -Wextra")