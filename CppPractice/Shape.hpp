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
    virtual double Area()=0;
    virtual double Perimeter()=0;
    double AreaPlusPerimeter();
    
};

class rectangle: public Shape{
    public:
    double Length;
    double Width;
    rectangle(double L = 1, double W = 1){
        Length = L;
        Width = W;
    };

    double Area();
    double Perimeter();
};

class triangle: public Shape{
    public:
    CartesianVector<double> V1;
    CartesianVector<double> V2;
    CartesianVector<double> V3;
    
    triangle(double v1[2], double v2[2], double v3[2])
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
