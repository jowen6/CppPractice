#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - Do this only
                          // in ONE executable test! You can't multiply define
                          // "main"

#include "../CartesianVector.hpp"
#include <catch.hpp> // We can do this <> include because CMakeLists at the top ADDED it to our "Include Directories"
// Technically, this is bad practice, but we're trying to learn basic ideas
// first!

TEST_CASE("Add Two Vectors", "[vector add]") {
  CartesianVector<double> V(33.5, 4.0, 11.0);
  CartesianVector<double> W(3.0, 99.43, 5.0);
  CartesianVector<double> result = V + W;
  CartesianVector<double> expected_result(36.5, 103.43, 16);
  
  REQUIRE(expected_result.X == result.X);
  REQUIRE(expected_result.Y == result.Y);
  REQUIRE(expected_result.Z == result.Z);
  
}

TEST_CASE("Check norm function", "[norm test]") {
    // Check that norm functions correctly
    CartesianVector<double> V(2, 2, 1);
    REQUIRE(3 == V.norm());
}
// Always add a new line at an end of a file; gitlab/github complain otherwise
