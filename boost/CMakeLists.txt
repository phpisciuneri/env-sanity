project( BOOST CXX )
cmake_minimum_required( VERSION 2.8 )

find_package( Boost REQUIRED COMPONENTS program_options )

add_executable( boost_include boost_inc.cpp )
add_executable( boost_lib po.cpp )

include_directories( ${Boost_INCLUDE_DIRS} )

target_link_libraries( boost_lib ${Boost_LIBRARIES} )

