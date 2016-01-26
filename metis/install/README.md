# Custom Installation

In this directory you will find a sample build script that will configure METIS for install.  Use this as a template for installing METIS on your system.

## CMake Support

There is no FindMETIS.cmake module shipped with CMake (as of v3.3).  In order for CMake to find METIS using the find_package command do the following:

* Let `root=/path/to/metis/install`
* Create the path: `$root/cmake/METIS`
* `cp METISConfig.cmake $root/lib/cmake/METIS/.` 
* `export CMAKE_PREFIX_PATH=$root:$CMAKE_PREFIX_PATH`