# ALways specify a minimum version and a project name for CMake
cmake_minimum_required (VERSION 2.6)
project (cpp_practice)

# Enable testing allows you to add tests and run them via "make test"
enable_testing()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# When you compile, like with g++ my_code.cpp, you can pass flags. We pass a few
# We pass the C++ standard version, which I choose to be 14, then a bunch of warnings
# where the compiler will warn us if we have sketchy code. Wall, Wextra, and Wno-unused
# are warnings, where Wall is "all" warnings (but not really...), Wextra is extra warnings,
# and Wno-unused is a "warn me when I have unused variables, which probably means something
# is sketchy in my code"

SET(CMAKE_CXX_FLAGS "-std=c++14 -Wall -O3 -Wextra -Wno-unused")


add_subdirectory(CppPractice)

