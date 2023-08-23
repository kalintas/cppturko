
project(CPPTURKOGEN)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(cppturkogen "${SRC_DIR}/main.cpp")

set_target_properties(
    cppturkogen PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)