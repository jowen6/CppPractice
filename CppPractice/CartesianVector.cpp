//
//  CartesianVector.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/25/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "CartesianVector.hpp"

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

