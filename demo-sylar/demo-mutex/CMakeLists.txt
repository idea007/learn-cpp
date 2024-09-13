cmake_minimum_required(VERSION 3.16.0)

project(demo-mutex CXX)

add_definitions("-O3 -Wall -fPIC -Wno-unused-result")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread -Wno-builtin-macro-redefined")
set(LIBS Threads::Threads)

file(GLOB_RECURSE SRC_FILES
    "${PROJECT_SOURCE_DIR}/src/*.c"
    "${PROJECT_SOURCE_DIR}/src/*.cc"
    "${PROJECT_SOURCE_DIR}/src/*.cpp")

find_package(Threads REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}
                    ${PROJECT_SOURCE_DIR}/include)




add_executable(test_null_mutex example/test_null_mutex.cpp  ${SRC_FILES})
add_executable(test_semaphore example/test_semaphore.cpp  ${SRC_FILES})
add_executable(demo-mutex main.cpp  ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${LIBS})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)