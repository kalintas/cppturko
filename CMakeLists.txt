add_subdirectory(gen)

cmake_minimum_required(VERSION 3.21)

project(CPPTURKO)

include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/CompilerWarnings.cmake")

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(
    SRC_FILES 
    "${SRC_DIR}/main.cpp" 
    "${SRC_DIR}/hashmaps.cpp"
)

message(${SRC_FILES})

add_executable(cppturko ${SRC_FILES})

# Open warnings for the project.
set_project_warnings(cppturko ON "" "" "" "")

# Use unicode instead of regular chars.
target_compile_definitions(cppturko PRIVATE UNICODE=1)

set_target_properties(
    cppturko PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)