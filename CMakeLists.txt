cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -DSDK_EXPORTS -DDLC_INTERFACE_EXPORTS")

include_directories(./)
file(GLOB JNI_SRC  *.cpp)

add_library(jnitest SHARED ${JNI_SRC})
