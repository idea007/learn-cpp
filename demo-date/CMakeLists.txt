cmake_minimum_required(VERSION 3.16.3)

project(demo-date CXX)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SRC_FILES
    "${PROJECT_SOURCE_DIR}/src/*.c"
    "${PROJECT_SOURCE_DIR}/src/*.cc"
    "${PROJECT_SOURCE_DIR}/src/*.cpp")

include_directories(${PROJECT_SOURCE_DIR}
                    ${PROJECT_SOURCE_DIR}/include)


add_executable(${PROJECT_NAME} main.cpp  ${SRC_FILES})


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)