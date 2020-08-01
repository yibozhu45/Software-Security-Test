cmake_minimum_required(VERSION 2.6)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(a.out DateGoogleTest.cpp Date.cpp)
target_link_libraries(a.out ${GTEST_LIBRARIES} pthread)
