cmake_minimum_required(VERSION 2.8)

add_library(pvrtc src/pvrtc.cpp)
target_include_directories(pvrtc PUBLIC include)

add_executable(pvrtc_example example/main.cpp)
target_link_libraries(pvrtc_example PUBLIC pvrtc)