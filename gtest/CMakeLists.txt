project( GTEST CXX )
cmake_minimum_required( VERSION 2.8 )

enable_testing()
find_package( GTest REQUIRED )
include_directories( ${GTEST_INCLUDE_DIRS} )

add_executable( foo foo.cpp )
target_link_libraries( foo ${GTEST_BOTH_LIBRARIES} )

add_test( AllTestsInFoo foo )
