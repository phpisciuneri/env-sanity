# BOOST
Sanity test that we can use the Boost headers and libraries.  See [boost.org](http://www.boost.org).

## Build

```bash
$ mkdir build
$ cd build
$ cmake ..
$ make 
```

## Test

* Header only: 
  
  ```bash 
  $ ./boost_foreach
  ```

* Libraries:

  ```bash
  $ ./boost_po --help
  $ ./boost_po --compression=1
  ```
  
## Notes

### Mac OS X

* Need to export `DYLD_LIBRARY_PATH` for proper run-time execution. See [here](http://stackoverflow.com/questions/10820981/dylibs-and-os-x).