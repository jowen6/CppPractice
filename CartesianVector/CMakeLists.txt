set(lib_name CartesianVector_library)

# A library is a chunk of compiled cpp files that *other* C++ code may want
# We make a library, named CartesianVector_library, which is composed of one cpp file, CartesianVector.cpp
# If this library needs *other* libraries, we specify that on the target_link_libraries line below
add_library(${lib_name} CartesianVector.cpp)

# Commented skeleton code! We don't need other code, but in practice you will!
#target_link_libraries(${lib_name} SomeOtherLibraryYouWrote)

# Tell CMake to go one more directory deep to find test code!
add_subdirectory(tests)

