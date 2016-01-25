# BLAS
Sanity test that we can use the blas libraries. See [www.netlib.org/blas/](http://www.netlib.org/blas/)

## Build

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Test

* To test the native Fortran functions: `blas_saxpy`
* To test the C bindings: `./cblas_saxpy`

## Mac OS X Notes

Use the [Accelerate Framework](https://developer.apple.com/library/mac/documentation/Accelerate/Reference/BLAS_Ref/). 

* Not sure of the best way to include the c headers though.  Including `#include <Accelerate/Acclerate.h>` is overkill.  I'd like to just include `cblas.h` without having to specify the absolute path.
