cmake_minimum_required(VERSION 3.26)

set(PROJECT_NAME BallSrc)
project(${PROJECT_NAME})
set(CMAKE_CXX_STANDARD 23)

add_subdirectory(BallSrcCore)
add_subdirectory(BallSrcEditor)

#set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT BallSrcEditor)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY BallSrcEditor)