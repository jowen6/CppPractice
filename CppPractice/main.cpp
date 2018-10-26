//
//  main.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/24/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>
#include "CartesianVector.hpp"
#include "Shape.hpp"



int main(int argc, const char * argv[]) {
    CartesianVector<double> CVec1(-3.0,1.0,1.0);
    CartesianVector<double> CVec2(2);
    CVec2 -= CVec1;
    CVec1.print();
    CVec2.print();
    std::cout << "Norm: "<< CVec2.norm() << "\n";
    
    return 0;
}


