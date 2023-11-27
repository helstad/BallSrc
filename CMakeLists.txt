cmake_minimum_required(VERSION 3.26)

set(PROJECT_NAME UllSrc)
set(CMAKE_CXX_STANDARD 23)

add_subdirectory(UllSrcCore)
add_subdirectory(UllSrcEditor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT UllSrcEditor)