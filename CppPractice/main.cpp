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
#include <vector>
#include "VectorCosine.hpp"


int main(int argc, const char * argv[]) {
    CartesianVector<double> CVec1(-3.0,1.0,1.0);
    CartesianVector<double> CVec2(2);
    CVec2 -= CVec1;
    CVec1.print();
    CVec2.print();
    std::cout << "Norm: "<< CVec2.norm() << "\n";
    
    std::vector<double> v1{1,2,3,4,5};
    VecCosIndex(v1);
    VecPrint(v1);
    
    std::vector<double> v2{1,2,3,4,5};
    VecCosIndex(v2);
    VecPrint(v2);
    
    std::vector<double> v3{1,2,3,4,5};
    VecCosIndex(v3);
    VecPrint(v3);
    
    return 0;
}


