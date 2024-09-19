cmake_minimum_required(VERSION 3.16.3)

project(demo-timer CXX)

set(CMAKE_CXX_STANDARD 11)

add_definitions("-O3 -Wall -fPIC -Wno-unused-result")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread -Wno-builtin-macro-redefined")

file(GLOB_RECURSE SRC_FILES
    "${PROJECT_SOURCE_DIR}/src/*.c"
    "${PROJECT_SOURCE_DIR}/src/*.cc"
    "${PROJECT_SOURCE_DIR}/src/*.cpp")

include_directories(${PROJECT_SOURCE_DIR}
                    ${PROJECT_SOURCE_DIR}/include)


add_executable(${PROJECT_NAME} main.cpp  ${SRC_FILES})


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)