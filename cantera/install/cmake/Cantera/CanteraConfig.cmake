# This module finds headers and requested component libraries for Cantera
# Results are reported in variables::
#
#   Cantera_FOUND            - True if headers and requested libraries were found
#   Cantera_INCLUDE_DIRS     - Cantera include directories
#   Cantera_LIBRARY_DIRS     - Link directories for Cantera libraries
#   Cantera_LIBRARIES        - Cantera component libraries to be linked

set( Cantera_LIBRARY_DIRS "${CMAKE_CURRENT_LIST_DIR}/../../../lib" CACHE PATH "Cantera libraries directory" )
set( Cantera_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/../../../include" CACHE PATH "Cantera headers directory" )
set( Cantera_LIBRARIES    "${Cantera_LIBRARY_DIRS}/libcantera.a" CACHE PATH "Cantera libraries" )
set( Cantera_FOUND "TRUE" )