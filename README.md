# FINITY

## Build Finity from source
### Requirements

-   Operating system: Ubuntu 22.04 or higher

-   GCC 11.3 or higher to support C++23

-   CMake 3.10 or higher

-   Git

### Step1 Download Finity source code

```shell
$ git clone https://github.com/infiniflow/finity.git
```

### Step2 Build source code

```shell
$ cd finity && mkdir build && cd build
$ cmake ..
$ make
```

### Step3 Start up Finity

```shell
$ ./build/src/finity
```

### Step4 Unit test
```shell
$ ./build/test/test_main
```