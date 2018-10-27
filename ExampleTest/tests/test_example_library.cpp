#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - Do this only
                          // in ONE executable test! You can't multiply define
                          // "main"

#include "../example_library.h"
#include <catch.hpp> // We can do this <> include because CMakeLists at the top ADDED it to our "Include Directories"
// Technically, this is bad practice, but we're trying to learn basic ideas
// first!

TEST_CASE("Add Three to a Vector", "[vector add]") {
  const std::vector<double> v{3.0, 4.0, 5.0};
  const double x = 1.0;
  const auto result = ScalarPlusVector<double>(x, v);
  const std::vector<double> expected_result{
      4.0, 5.0, 6.0}; // We should just be adding 1 to each entry in the vector
  REQUIRE(expected_result.size() == result.size());
  for (size_t i = 0; i < result.size(); ++i) {
    REQUIRE(expected_result[i] == result[i]);
  }
}

TEST_CASE("Take pi and 2 and triple them", "[make pair test]") {
    // constexpr is a fancy new C++11 thing that specifies
    // a value or function can be *known* at compile time
    // so don't waste run time generating them
    constexpr double pi = M_PI; // M_PI is defined in cmath header
    const int two = 2;

    double result_double;
    int result_int;
    std::tie(result_double, result_int) = TakeADoubleAndAnIntAndTripleThem(pi, two);

    REQUIRE(std::fabs(result_double - 3.0*pi) < 1e-13);
    REQUIRE(3*2 == result_int); 
}
// Always add a new line at an end of a file; gitlab/github complain otherwise
