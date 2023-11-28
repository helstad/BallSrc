cmake_minimum_required(VERSION 3.26)

set(ENGINE_PROJECT_NAME BallSrcCore)
set(CMAKE_CXX_STANDARD 23)

set(ENGINE_PUBLIC_INCLUDES
	includes/BallSrcCore/Application.hpp
	includes/BallSrcCore/Log.hpp
	includes/BallSrcCore/Event.hpp
)

set(ENGINE_PRIVATE_INCLUDES
	src/BallSrcCore/Window.hpp
)

set(ENGINE_PRIVATE_SOURCES
	src/BallSrcCore/Application.cpp
	src/BallSrcCore/Window.cpp
)

add_library(${ENGINE_PROJECT_NAME} STATIC
	${ENGINE_PUBLIC_INCLUDES}
	${ENGINE_PRIVATE_INCLUDES}
	${ENGINE_PRIVATE_SOURCES}
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)
target_include_directories(${ENGINE_PROJECT_NAME} PRIVATE src)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_23)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)

add_subdirectory(../external/spdlog ${CMAKE_CURRENT_BINARY_DIR}/spdlog)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE spdlog)

add_subdirectory(../external/glad ${CMAKE_CURRENT_BINARY_DIR}/glad)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glad)