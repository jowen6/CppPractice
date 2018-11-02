#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - Do this only
                          // in ONE executable test! You can't multiply define
                          // "main"

#include "../Shape.hpp"
#include <cmath>
#include <vector>
#include <catch.hpp> // We can do this <> include because CMakeLists at the top ADDED it to our "Include Directories"
// Technically, this is bad practice, but we're trying to learn basic ideas
// first!

TEST_CASE("Check rectangle area function", "[rectangle area]") {
    rectangle REC(2.1,10);

    REQUIRE(REC.Area() == 21);

}

TEST_CASE("Check rectangle perimeter function", "[rectangle perimeter]") {
    rectangle REC(5.3,11);
    
    REQUIRE(REC.Perimeter() == 32.6);
    
}


TEST_CASE("Check triangle area function", "[triangle area]") {
    double V1[] = {0, 1.0};
    double V2[] = {0, 0};
    double V3[] = {1.0, 0};
    
    triangle TRI(V1,V2,V3);
    
    REQUIRE(TRI.Area() == 0.5);
  
}

TEST_CASE("Check triangle perimeter function", "[triangle perimeter]") {
    double V1[] = {0, 1.0};
    double V2[] = {0, 0};
    double V3[] = {1.0, 0};
    
    triangle TRI(V1,V2,V3);
    
    REQUIRE(std::abs(TRI.Perimeter()-2-std::sqrt(2)) < 0.00001);

    
}
// Always add a new line at an end of a file; gitlab/github complain otherwise
