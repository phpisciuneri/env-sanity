project( BOOST CXX )
cmake_minimum_required( VERSION 3.3 )

find_package( Boost REQUIRED COMPONENTS program_options )
include_directories( ${Boost_INCLUDE_DIRS} )

add_executable( boost_foreach src/foreach.cpp )

add_executable( boost_po src/po.cpp )
target_link_libraries( boost_po ${Boost_LIBRARIES} )

