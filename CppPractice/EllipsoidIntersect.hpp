//
//  EllipsoidIntersect.hpp
//  CppPractice
//
//  Created by Justin Owen on 10/27/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef EllipsoidIntersect_hpp
#define EllipsoidIntersect_hpp

#include <stdio.h>
#include <vector>
#include <cmath>
#include <iostream>

std::vector<double> EllipsoidIntersect(const std::vector<double> &UnitVec,
                                       const std::vector<double> &ObserverLoc,
                                       double MajorX = 1, double MajorY = 1, double MajorZ = 1);

void PrintEllipsoidCoord(const std::vector<double> &V);
#endif /* EllipsoidIntersect_hpp */
