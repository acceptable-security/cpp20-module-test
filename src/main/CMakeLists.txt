cmake_minimum_required(VERSION 3.28)
project(main CXX)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE hello)
