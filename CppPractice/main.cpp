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
    
    CartesianVector() {};
    
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
    
    
    CartesianVector operator+(const CartesianVector V);
    void operator+=(const CartesianVector V);
    CartesianVector operator-(const CartesianVector V);
    void operator-=(const CartesianVector V);
};



CartesianVector CartesianVector::operator+(const CartesianVector V){
    CartesianVector VectorSum;
    VectorSum.X = X + V.X;
    VectorSum.Y = Y + V.Y;
    VectorSum.Z = Z + V.Z;
    
    return VectorSum;
};

void CartesianVector::operator+=(const CartesianVector V){
    CartesianVector VectorSum;
    X = X + V.X;
    Y = Y + V.Y;
    Z = Z + V.Z;

};

CartesianVector CartesianVector::operator-(const CartesianVector V){
    CartesianVector VectorSum;
    VectorSum.X = X - V.X;
    VectorSum.Y = Y - V.Y;
    VectorSum.Z = Z - V.Z;
    
    return VectorSum;
};

void CartesianVector::operator-=(const CartesianVector V){
    CartesianVector VectorSum;
    X = X - V.X;
    Y = Y - V.Y;
    Z = Z - V.Z;
    
};



int main(int argc, const char * argv[]) {
    CartesianVector CVec1(-3,0,0);
    CartesianVector CVec2(2.1);
    CVec2 -= CVec1;
    CVec1.print();
    CVec2.print();
    std::cout << "Norm: "<< CVec1.norm() << "\n";
    
    return 0;
}


