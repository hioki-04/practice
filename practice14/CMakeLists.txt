cmake_minimum_required(VERSION 3.14)

project(practice14)

find_package(GTest REQUIRED)

add_executable(practice14_test
    practice14.c
    practice14_test.cpp
)

target_link_libraries(practice14_test
    GTest::gtest_main
)
target_compile_options(practice14_test PRIVATE --coverage)
target_link_options(practice14_test PRIVATE --coverage) 

include(GoogleTest)
gtest_discover_tests(practice14_test)