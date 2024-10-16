# DLoader
A simple cross platform library intended for using in Apps where hot reloading C/C++ code is needed

# Guide
- if you use C++ make sure to look at requested function symbols using `nm` command in the library (plug)
- to get the hot reload you can dlclose a library handle then re-dlopen the library.

See [main.cpp](main.cpp) for more info
