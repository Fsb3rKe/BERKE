cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 17)

project(berke LANGUAGES CXX)

include_directories("${CMAKE_SOURCE_DIR}/lib/")

add_executable("${PROJECT_NAME}"
                src/main.cpp)
