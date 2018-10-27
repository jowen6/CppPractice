//
//  EllipsoidIntersect.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/27/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include "EllipsoidIntersect.hpp"
#include <vector>
#include <cmath>
#include <iostream>
std::vector<double> EllipsoidIntersect(const std::vector<double> &UnitVec,
                                       const std::vector<double> &ObserverLoc,
                                       double MajorX, double MajorY, double MajorZ){
    
    double a = UnitVec[0]*UnitVec[0]/(MajorX*MajorX) + UnitVec[1]*UnitVec[1]/(MajorY*MajorY) + UnitVec[2]*UnitVec[2]/(MajorZ*MajorZ);
    
    double b = 2*ObserverLoc[0]*UnitVec[0]/(MajorX*MajorX)
             + 2*ObserverLoc[1]*UnitVec[1]/(MajorY*MajorY)
             + 2*ObserverLoc[2]*UnitVec[2]/(MajorZ*MajorZ);
    
    double c = ObserverLoc[0]*ObserverLoc[0]/(MajorX*MajorX) + ObserverLoc[1]*ObserverLoc[1]/(MajorY*MajorY) + ObserverLoc[2]*ObserverLoc[2]/(MajorZ*MajorZ) - 1;
    
    //(ObserverLoc[0] + t*UnitVec[0])^2/MajorX^2 + (ObserverLoc[1] + t*UnitVec[1])^2/MajorY^2 + (ObserverLoc[2] + t*UnitVec[2])^2/MajorZ^2 - 1 = 0
    
    
    double root1 = (-b + std::sqrt(b*b-4*a*c))/(2*a);
    double root2 = (-b - std::sqrt(b*b-4*a*c))/(2*a);
    
    double TrueParameter = std::min(root1,root2);
    
    std::vector<double> EllipsoidPointCoordinates{ObserverLoc[0] + TrueParameter*UnitVec[0],
                                                  ObserverLoc[1] + TrueParameter*UnitVec[1],
                                                  ObserverLoc[2] + TrueParameter*UnitVec[2]};
    
    return EllipsoidPointCoordinates;
}

void PrintEllipsoidCoord(const std::vector<double> &V){
    std::cout << "(" << V[0] << ", " << V[1] << ", " << V[2] << ")" << "\n";
}
