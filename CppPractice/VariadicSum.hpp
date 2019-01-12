//
//  VariadicSum.hpp
//  CppPractice
//
//  Created by Justin Owen on 11/27/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef VariadicSum_hpp
#define VariadicSum_hpp

#include <stdio.h>

//Variadic templates don't work iteratively. Must be done recursively

//Base Case
template<typename T>
T adder(T v){
    return v;
}

//Higher Cases
template<typename T, typename... Args>
T adder(T v, Args... args){
    return v + adder(args...);
}

#endif /* VariadicSum_hpp */
