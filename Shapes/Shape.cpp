//
//  Shape.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/25/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include "Shape.hpp"
#include <vector>
#include "CartesianVector.hpp"

double Shape::AreaPlusPerimeter(){
    
        return Area() + Perimeter();
}


double rectangle::Area(){
    
    return Length*Width;
}

double rectangle::Perimeter(){
    
    return 2*Length + 2*Width;
}


double triangle::Area(){
    CartesianVector<double> E1 = V2-V1;
    CartesianVector<double> E2 = V3-V1;
    CartesianVector<double> E3(E1.Y*E2.Z - E1.Z*E2.Y, E1.Z*E2.X - E1.X*E2.Z, E1.X*E2.Y - E1.Y*E2.X);
    
    return 0.5*E3.norm();
}

double triangle::Perimeter(){
    CartesianVector<double> E1 = V1-V2;
    CartesianVector<double> E2 = V2-V3;
    CartesianVector<double> E3 = V3-V1;


    return E1.norm() + E2.norm() + E3.norm();
}
