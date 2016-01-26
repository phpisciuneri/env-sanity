# local vars
root=/opt/apps/gcc-5_2/metis/
src=$(pwd)/parmetis-4.0.3/metis
build=build-metis-5.1.0

# set environment
module purge
module load cmake/3.3.2
module load gcc/5.2.0

# stage
mkdir -p $build
cd $build

# configure
CC=gcc cmake \
    -DCMAKE_BUILD_TYPE=release \
    -DCMAKE_INSTALL_PREFIX=$root \
    -DOPENMP=on \
    -DGKLIB_PATH=$src/GKlib \
    $src
