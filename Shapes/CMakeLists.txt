set(lib_name Shapes_library)

# A library is a chunk of compiled cpp files that *other* C++ code may want
# We make a library, named example_library, which is composed of one cpp file, example_library.cpp
# If this library needs *other* libraries, we specify that on the target_link_libraries line below
add_library(${lib_name} Shape.cpp)

# Commented skeleton code! We don't need other code, but in practice you will!
#target_link_libraries(${lib_name} SomeOtherLibraryYouWrote)

# Tell CMake to go one more directory deep to find test code!
add_subdirectory(tests)

