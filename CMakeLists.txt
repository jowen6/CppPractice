# ALways specify a minimum version and a project name for CMake
cmake_minimum_required (VERSION 2.6)
project (cpp_practice)

# Enable testing allows you to add tests and run them via "make test"
enable_testing()

# When you compile, like with g++ my_code.cpp, you can pass flags. We pass a few
# We pass the C++ standard version, which I choose to be 14, then a bunch of warnings
# where the compiler will warn us if we have sketchy code. Wall, Wextra, and Wno-unused
# are warnings, where Wall is "all" warnings (but not really...), Wextra is extra warnings,
# and Wno-unused is a "warn me when I have unused variables, which probably means something
# is sketchy in my code"

SET(CMAKE_CXX_FLAGS "-std=c++14 -Wall -O3 -Wextra -Wno-unused")

# Include directories is hacky nowadays, but easy for us:
# This tells CMake to teach the compiler where to look for header files
# Usually, your computer looks in your current compilation directory, somewhere special like
# /usr/include or /usr/local/include, but otherwise it needs help.
# With this, you can #include <catch.hpp>, which sits in that third_party/ directory
include_directories("third_party/")

# Tell CMake to go look into CppPractice to find some code, and also go into ExampleTest for code 
add_subdirectory(CppPractice)
add_subdirectory(ExampleTest)

