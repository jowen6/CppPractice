//
//  TemplatedFactorial.hpp
//  CppPractice
//
//  Created by Justin Owen on 11/28/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef TemplatedFactorial_hpp
#define TemplatedFactorial_hpp

#include <stdio.h>
/*
template <unsigned int n>
struct factorial {
    enum { value = n * factorial<n - 1>::value };
};

template <>
struct factorial<0> {
    enum { value = 1 };
};
*/
template <unsigned int n>
struct factorial {
    static const int value = n * factorial<n - 1>::value;
};

template <>
struct factorial<0> {
    static const int value = 1;
};
#endif /* TemplatedFactorial_hpp */
