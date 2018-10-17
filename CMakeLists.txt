cmake_minimum_required(VERSION 2.8)

project(eff_cpp)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -pthread -w")

#Adds the OpenCV 4 component
find_package(OpenCV 3 REQUIRED)

INCLUDE_DIRECTORIES(
    include
    ${OpenCV_INCLUDE_DIRS} )

file(GLOB_RECURSE HEADERS "include/*.h*")

add_executable(${PROJECT_NAME} "src/main.cpp" "src/bowlcamera.cpp" "src/application.cpp" ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
