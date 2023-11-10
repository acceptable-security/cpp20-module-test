cmake_minimum_required(VERSION 3.28)
project(hello CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(hello)
target_sources(hello
  PUBLIC
    FILE_SET cxx_modules
    TYPE CXX_MODULES
    FILES hello.cppm
)
target_sources(hello
  PRIVATE
   hello1.cpp
)
