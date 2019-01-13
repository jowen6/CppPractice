//
//  ComplexNumber.hpp
//  CppSciComp
//
//  Created by Justin Owen on 1/12/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#ifndef ComplexNumber_hpp
#define ComplexNumber_hpp

#include <stdio.h>
#include <iostream>

class ComplexNumber{
private:
    double RealPart;
    double ImaginaryPart;
    
public:
    ComplexNumber();
    ComplexNumber(double x, double y);
    double CalculateModulus() const;
    double CalculateArgument() const;
    ComplexNumber CalculatePower(double n) const;
    ComplexNumber& operator=(const ComplexNumber& z);
    ComplexNumber operator-() const;
    ComplexNumber operator+(const ComplexNumber& z) const;
    ComplexNumber operator-(const ComplexNumber& z) const;
    friend std::ostream& operator<< (std::ostream& output, const ComplexNumber& z);
    
};

#endif /* ComplexNumber_hpp */
