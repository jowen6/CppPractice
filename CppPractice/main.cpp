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
    
    
    void print(){
        std::cout << "Components: " << X << ", " << Y << ", " << Z << "\n";
    }
    
    
    float norm(){
        float Norm = X*X + Y*Y + Z*Z;
        Norm = std::sqrt(Norm);
        return Norm;
    }
    
    
};





int main(int argc, const char * argv[]) {
    CartesianVector CVec1(-3,0,0);
    CartesianVector CVec2(2.1);
    
    CVec1.print();
    CVec2.print();
    
    std::cout << "Norm: "<< CVec1.norm() << "\n";
    
    return 0;
}


