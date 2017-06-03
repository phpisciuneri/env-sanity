project( CANTERA CXX C )
cmake_minimum_required( VERSION 3.3 )

set( CMAKE_CXX_STANDARD 11 )

find_package( Boost REQUIRED )
find_package( Cantera REQUIRED )

include_directories( ${Boost_INCLUDE_DIRS} ${Cantera_INCLUDE_DIRS} )
link_directories( /opt/apps/gcc-5_2/lapack/3.7.0/lib )

add_executable( example src/main.cpp )
target_link_libraries( example ${Cantera_LIBRARIES} blas lapack )
