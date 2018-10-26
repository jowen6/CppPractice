//
//  FindSignAndMagnitude.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/26/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include "FindSignAndMagnitude.hpp"
#include <iostream>
#include <cmath>
#include <utility>
#include <iomanip>
std::pair<int, double> FindSignAndMagnitude(const double &V){
    
    double VA = std::abs(V);
    std::pair<int, double> SignMagnitude(V/VA, VA);
    return SignMagnitude;
    
}

void PrintPair(const std::pair<int, double> &Pair){
    std::cout << std::setprecision(10) << "(" << Pair.first << ", "<< Pair.second << ")"<< "\n";
}
