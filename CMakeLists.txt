cmake_minimum_required(VERSION 3.12)
project(drone_map)

find_package(OpenCV REQUIRED)
add_executable(tyRed src/Application.cpp src/Reducer.cpp)

target_link_libraries(tyRed ${OpenCV_LIBS})