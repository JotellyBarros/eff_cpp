cmake_minimum_required(VERSION 2.8)

project(eff_cpp)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -w")

#Adds the OpenCV 4 component
find_package(OpenCV 4 REQUIRED)

INCLUDE_DIRECTORIES(
    include
    ${OpenCV_INCLUDE_DIRS} )

file(GLOB_RECURSE HEADERS "include/*.h*")

add_executable(${PROJECT_NAME} "src/main.cpp" "src/bowlcamera.cpp" ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
