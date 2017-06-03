##
## Source this file
##

## set environment
module purge
module load cmake
module load python/2.7.10-anaconda-2.4
module load gcc/5.2.0
module load lapack/3.7.0
module load mpich/3.1.4
module load boost/1.60.0
module load cantera/2.3.0

mkdir -p build
cd build

cmake ..
