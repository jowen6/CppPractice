//
//  main.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/24/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>
#include <cmath>

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
float CartesianVectorNorm(CartesianVector);

int main(int argc, const char * argv[]) {
    CartesianVector CVec1(-3,0,0);
    CartesianVector CVec2(2.1);
    
    PrintCartesianVectorComponents(CVec1);
    PrintCartesianVectorComponents(CVec2);
    
    std::cout << "Norm: "<< CartesianVectorNorm(CVec1) << "\n";
    
    return 0;
}

void PrintCartesianVectorComponents(CartesianVector V){
    std::cout << "Components: " << V.X << ", " << V.Y << ", " << V.Z << "\n";
}

float CartesianVectorNorm(CartesianVector V){
    float Norm = V.X*V.X + V.Y*V.Y + V.Z*V.Z;
    Norm = std::sqrt(Norm);
    return Norm;
}
