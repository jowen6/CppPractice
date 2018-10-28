//
//  CartesianVector.hpp
//  CppPractice
//
//  Created by Justin Owen on 10/25/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef CartesianVector_hpp
#define CartesianVector_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>

//Assuming T is numerical
template<class T>
struct CartesianVector{
    T X;
    T Y;
    T Z;
    
    CartesianVector() {}
    
    CartesianVector(T x, T y, T z) :
    X(x), Y(y), Z(z) {}
    
    CartesianVector(T x) :
    X(x), Y(x), Z(x) {}
    
    
    
    
    void print(){
        std::cout << "Components: " << X << ", " << Y << ", " << Z << "\n";
    }
    
    //norms are not always of the same class as the vector components
    double norm(){
        double Norm = X*X + Y*Y + Z*Z;
        Norm = std::sqrt(Norm);
        return Norm;
    }
    
    CartesianVector<T> operator+(const CartesianVector<T> V);
    void operator+=(const CartesianVector V);
    CartesianVector<T> operator-(const CartesianVector<T> V);
    void operator-=(const CartesianVector<T> V);
    
};


//Overloaded operators assume the two vectors are of same type
template<class T>
CartesianVector<T> CartesianVector<T>::operator+(const CartesianVector<T> V){
    CartesianVector<T> VectorSum;
    VectorSum.X = X + V.X;
    VectorSum.Y = Y + V.Y;
    VectorSum.Z = Z + V.Z;
    
    return VectorSum;
};


template<class T>
void CartesianVector<T>::operator+=(const CartesianVector<T> V){
    X = X + V.X;
    Y = Y + V.Y;
    Z = Z + V.Z;
    
};

template<class T>
CartesianVector<T> CartesianVector<T>::operator-(const CartesianVector<T> V){
    CartesianVector<T> VectorSum;
    VectorSum.X = X - V.X;
    VectorSum.Y = Y - V.Y;
    VectorSum.Z = Z - V.Z;
    
    return VectorSum;
};

template<class T>
void CartesianVector<T>::operator-=(const CartesianVector<T> V){
    X = X - V.X;
    Y = Y - V.Y;
    Z = Z - V.Z;
    
};
#endif /* CartesianVector_hpp */
