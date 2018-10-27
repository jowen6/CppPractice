#include <vector>
// Header files are where C++ looks to find the *names* of functions and classes
// The compiler uses the #include headers command to make sure those names exist
// and essentially copy and pastes the header into whatever h or cpp file calls it
// That way it *knows* those names and can resolve the name of them at compile time

// The *linking step* is where C++ says OK I found the names from headers and declarations,
// but where is the meat/implementation of the code? That *usually* happens in cpp files!

// Templates are *blueprints* for code and don't actually "exist" yet. When another file calls
// for a template type/function with a specific type THEN the compiler instantiates that code
// Consequently, templates need to remain in the header file as simply "available" blueprints
template <typename T>
std::vector<T> ScalarPlusVector(const double x, const std::vector<T> &v) {
  std::vector<T> result = v; // Make a vector of the same size as v
  for (auto &val : result) {
    val += x;
  }
  return result;
}

// This is a stupid, but concrete function. We define his implementation in a cpp file
std::pair<double, int> TakeADoubleAndAnIntAndTripleThem(const double x, const int y);

