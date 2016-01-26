project( METIS CXX C )
cmake_minimum_required( VERSION 3.3 )

find_package( METIS REQUIRED )
include_directories( ${METIS_INCLUDE_DIRS} )

add_executable( metis_graph src/graph.cpp )
target_link_libraries( metis_graph ${METIS_LIBRARIES} )
