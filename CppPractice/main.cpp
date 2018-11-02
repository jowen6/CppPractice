//
//  main.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/24/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>
//#include "CartesianVector.hpp"
//#include "Shape.hpp"
#include <vector>
#include "VectorCosine.hpp"
#include "FindSignAndMagnitude.hpp"
#include "EllipsoidIntersect.hpp"

int main(int argc, const char * argv[]) {
    /*
    CartesianVector<double> CVec1(-3.0,1.0,1.0);
    CartesianVector<double> CVec2(2);
    CVec2 -= CVec1;
    CVec1.print();
    CVec2.print();
    std::cout << "Norm: "<< CVec2.norm() << "\n";
    */
    //Shape functionality examples
    double vert1[] = {0,0};
    double vert2[] = {1,0};
    double vert3[] = {0,1};
    /*
    triangle Tri(vert1, vert2, vert3);
    std::cout << Tri.Area() << "\n";
    std::cout << Tri.Perimeter() << "\n";
    std::cout << Tri.AreaPlusPerimeter() << "\n";
    
    rectangle Rec(7,9);
    std::cout << Rec.Area() << "\n";
    std::cout << Rec.Perimeter() << "\n";
    std::cout << Rec.AreaPlusPerimeter() << "\n";
    */
    //Convert vector to cos(vector) examples
    std::vector<double> v1{1,2,3,4,5};
    VecCosIndex(v1);
    VecPrint(v1);
    
    std::vector<double> v2{1,2,3,4,5};
    VecCosRange(v2);
    VecPrint(v2);
    
    std::vector<double> v3{1,2,3,4,5};
    VecCosIter(v3);
    VecPrint(v3);
    
    //FindSignAndMagnitude Examples
    std::pair<int, double> Pair = FindSignAndMagnitude(-1.69434343);
    PrintPair(Pair);
    
    std::pair<int, double> Pair2 = FindSignAndMagnitude(110900.454577);
    PrintPair(Pair2);

    
    //Ellipsoid intersection
    std::vector<double> ObserverLoc{1,0,0};
    std::vector<double> VObserver{0, 1, 0};
    std::vector<double> EllipseCoord = EllipsoidIntersect(VObserver, ObserverLoc, 1, 1, 1);
    PrintEllipsoidCoord(EllipseCoord);
    return 0;
}


