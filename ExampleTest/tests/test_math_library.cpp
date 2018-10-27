#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - Do this only
                          // in ONE executable test! You can't multiply define
                          // "main"

#include "../math_library.h"
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
