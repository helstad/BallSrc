cmake_minimum_required(VERSION 3.26)

set(EDITOR_PROJECT_NAME BallSrcEditor)
set(CMAKE_CXX_STANDARD 23)

add_executable(${EDITOR_PROJECT_NAME}
	src/main.cpp
)

target_link_libraries(${EDITOR_PROJECT_NAME} BallSrcCore)
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_23)

set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)