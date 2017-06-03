##
## Source this file
##

## set environment
module purge
module load scons
module load python
module load gcc/5.2.0
module load lapack/3.7.0
module load mpich/3.1.4
module load boost/1.60.0

scons build \
      prefix=/opt/apps/gcc-5_2/mpich-3_1/cantera/2.3.0 \
      boost_inc_dir=$BOOST_ROOT/include \
      blas_lapack_libs='lapack,blas' \
      blas_lapack_dir=$LAPACK_ROOT \
      system_sundials=n \
      f90_interface=n \
      FORTRAN=gfortran \
      CC=gcc \
      CXX=g++

      
