//
//  main.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/24/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>

struct CartesianVector{
    float X;
    float Y;
    float Z;
    
    CartesianVector(float x, float y, float z) :
        X(x), Y(y), Z(z) {}
    
    CartesianVector(float x) :
        X(x), Y(x), Z(x) {}
};

void PrintCartesianVectorComponents(CartesianVector);

int main(int argc, const char * argv[]) {
    CartesianVector CVec1(1,2,3);
    CartesianVector CVec2(2.1);
    PrintCartesianVectorComponents(CVec1);
    PrintCartesianVectorComponents(CVec2);
    return 0;
}

void PrintCartesianVectorComponents(CartesianVector V){
    std::cout << "Components: " << V.X << ", " << V.Y << ", " << V.Z << "\n";
}
