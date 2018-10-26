//
//  VectorCosine.cpp
//  CppPractice
//
//  Created by Justin Owen on 10/26/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#include <iostream>
#include "VectorCosine.hpp"
#include <vector>
#include <cmath>


void VecCosIndex(std::vector<double> &V){
    for (int i = 0; i<V.size(); i=i+1){
        V[i] = cos(V[i]);
    }
}

void VecCosRange(std::vector<double> &V){
    int n = 0;
    for (double i : V){
        V[n] = cos(i);
        n = n+1;
    }
}

void VecCosIter(std::vector<double> &V){
    for (std::vector<double>::iterator i = V.begin(); i != V.end(); ++i){
        *i = cos(*i);
    }
}

void VecPrint(const std::vector<double> &V){
    for (int i = 0; i<V.size(); i=i+1){
                std::cout << V[i] << "\n";
    }
}
