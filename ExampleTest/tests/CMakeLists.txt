# An executable is a compiled piece of code that you can *run*
# That is, it has a "main()" function somewhere.
# Tests should be runnable code, so we compile them into an executable

set(test_name example_test) # Define varibale "test_name" which we can use as ${test_name}

# This line needs to know the *name* of the executable and then a list of cpp files to go in it
add_executable(${test_name} test_example_library.cpp)

# This test uses code from example_library.cpp, so it needs to link against it!
# Note, if it JUST used header stuff, you'd be fine and wouldn't need to link
target_link_libraries(${test_name} example_library)

# This mysterious line makes no sense to me, but never forget it
# You specify the NAME of the test and the COMMAND to run I guess (it's confusing)
# This command teaches CMake that "when I type 'make test' in the build directory, run THIS executable!
add_test(NAME ${test_name} COMMAND ${test_name})

