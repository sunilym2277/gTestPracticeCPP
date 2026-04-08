cmake_minimum_required(version 3.8)

set(This ExampleTests)

set(SOURCES
    ExampleTests.cpp
)

add_executable( ${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
gtest_main
Example

)

add_test(
    NAME ${This}
    COMMAND ${This}
)