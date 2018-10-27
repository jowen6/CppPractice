set(lib_name example_library)

add_library(${lib_name} example_library.cpp)

add_subdirectory(tests)
