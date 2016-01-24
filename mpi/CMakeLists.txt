project( ENV-SANITY CXX C Fortran )
cmake_minimum_required( VERSION 2.8 )

find_package( MPI REQUIRED )

add_executable( helloc main.cpp )

include_directories( ${MPI_C_INCLUDE_PATH} )

target_link_libraries( helloc ${MPI_C_LIBRARIES} )
