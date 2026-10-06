cmake_minimum_required(VERSION 3.14)

project(practice13)

find_package(GTest REQUIRED)

add_executable(practice13_test
    practice13.c
    practice13_test.cpp
)

target_link_libraries(practice13_test
    GTest::gtest_main
)
target_compile_options(practice13_test PRIVATE --coverage)
target_link_options(practice13_test PRIVATE --coverage) 

include(GoogleTest)
gtest_discover_tests(practice13_test)