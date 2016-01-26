# METIS

Sanity test that we can use METIS. See [http://glaros.dtc.umn.edu/gkhome/metis/metis/overview](http://glaros.dtc.umn.edu/gkhome/metis/metis/overview).

## Build

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## Test

```bash
$ ./metis_graph
```

## Notes

CMake is not packaged with a FindMETIS.cmake module.  See the `install` directory for a basic solution.
