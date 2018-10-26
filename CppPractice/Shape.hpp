//
//  Shape.hpp
//  CppPractice
//
//  Created by Justin Owen on 10/25/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <vector>
#include "CartesianVector.hpp"

class Shape{
public:
    Shape();
    
    virtual double Area(){return 0;};
    virtual double Perimeter(){return 0;};
    double AreaPlusPerimeter();
    
};

class rectangle: public Shape{
public:
    rectangle(double Length = 1, double Width = 1);
    double Length;
    double Width;
    double Area();
    double Perimeter();
};

class triangle: public Shape{
public:
    CartesianVector<double> V1;
    CartesianVector<double> V2;
    CartesianVector<double> V3;
    
    triangle(double v1[2], double v2[2], double v3[2]) : Shape()
    {
        V1.X = v1[0];
        V1.Y = v1[1];
        V1.Z = 0;
        V2.X = v2[0];
        V2.Y = v2[1];
        V2.Z = 0;
        V3.X = v3[0];
        V3.Y = v3[1];
        V3.Z = 0;
    }
    
    double Area();
    double Perimeter();
};
#endif /* Shape_hpp */
