#include "example_library.h"
#include <utility>

// Remember: cpp files are *source* files. These are where you define the *implementation*
// Headers are allowed to define the implementation of a few things: templates (always!)
// class methods inside the class { } body and inline functions.

// Inline functions are simple, small functions that the compiler takes from the header file
// and copies and pastes them *everywhere* they are called. This prevents an actual function call
// so it can speed up code a bit. For large functions, inlining can massively bloats the resulting code!

// Stupid function: Always name your functions as clearly as possible!
// The return type is a std::pair, which is an object that holds *two* values
// of any type you specify. Template parameters of double and int tell the compiler
// that the pair holds first a double and second an int
// Recall: templates must be known at *compile* time, not run time!
std::pair<double, int> TakeADoubleAndAnIntAndTripleThem(const double x, const int y) {
    return std::make_pair(3.0*x, 3*y);

}

