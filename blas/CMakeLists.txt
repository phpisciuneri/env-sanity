project( BLAS CXX C Fortran )
cmake_minimum_required( VERSION 3.3 )

find_package( BLAS REQUIRED )

# saxpy
add_executable( blas_saxpy src/saxpy.f90 )
target_link_libraries( blas_saxpy ${BLAS_LIBRARIES} )

# C bindings for saxpy
add_executable( cblas_saxpy src/saxpy.cpp )
target_link_libraries( cblas_saxpy ${BLAS_LIBRARIES} )

