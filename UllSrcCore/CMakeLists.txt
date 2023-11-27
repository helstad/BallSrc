cmake_minimum_required(VERSION 3.26)

set(ENGINE_PROJECT_NAME UllSrcCore)
set(CMAKE_CXX_STANDARD 23)

add_library(${ENGINE_PROJECT_NAME} STATIC
	src/UllSrcCore/Utils/test.cpp
	includes/UllSrcCore/Utils/test.hpp
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_23)