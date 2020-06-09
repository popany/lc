cmake_minimum_required(VERSION 3.15.7)

if(WIN32)
    cmake_policy(SET CMP0091 NEW)
    # use compile option /MD
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
    # remove compile option "/RTC1" in default CMAKE_CXX_FLAGS_DEBUG 
    set(CMAKE_CXX_FLAGS_DEBUG "/Zi /Ob0 /Od")
endif()

project(lc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)
add_subdirectory(gtest)