# This module sets the headers and libraries for METIS
# Results are reported in variables:
#
#   METIS_FOUND            - True if headers and requested libraries were found
#   METIS_INCLUDE_DIRS     - METIS include directories
#   METIS_LIBRARY_DIRS     - Link directories for METIS libraries
#   METIS_LIBRARIES        - METIS component libraries to be linked

set( METIS_LIBRARY_DIRS "${CMAKE_CURRENT_LIST_DIR}/../../../lib" CACHE PATH "Metis libraries directory" )
set( METIS_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/../../../include" CACHE PATH "Metis headers directory" )
set( METIS_LIBRARIES    "${METIS_LIBRARY_DIRS}/libmetis.a" CACHE PATH "Metis libraries" )
set( METIS_FOUND "TRUE" )