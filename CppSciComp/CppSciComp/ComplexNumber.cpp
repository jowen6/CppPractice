//
//  ComplexNumber.cpp
//  CppSciComp
//
//  Created by Justin Owen on 1/12/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#include "ComplexNumber.hpp"
#include<cmath>
#include <iostream>
ComplexNumber::ComplexNumber(){
    RealPart = 0.0;
    ImaginaryPart = 0.0;
}


ComplexNumber::ComplexNumber(double x, double y){
    RealPart = x;
    ImaginaryPart = y;
}


double ComplexNumber::CalculateModulus() const{
    return sqrt(RealPart*RealPart + ImaginaryPart*ImaginaryPart);
}


double ComplexNumber::CalculateArgument() const{
    return atan2(ImaginaryPart, RealPart);
}


ComplexNumber ComplexNumber::CalculatePower(double n) const{
    double Modulus = CalculateModulus();
    double Argument = CalculateArgument();
    double Mod_of_result = pow(Modulus, n);
    double Arg_of_result = Argument*n;
    double Real_part = Mod_of_result*cos(Arg_of_result);
    double Imaginary_part = Mod_of_result*sin(Arg_of_result);
    ComplexNumber z(Real_part, Imaginary_part);
    return z;
}


ComplexNumber& ComplexNumber::operator=(const ComplexNumber& z){
    RealPart = z.RealPart;
    ImaginaryPart = z.ImaginaryPart;
    return *this;
}


ComplexNumber ComplexNumber::operator-() const{
    ComplexNumber w;
    w.RealPart = -RealPart;
    w.ImaginaryPart = -ImaginaryPart;
    return w;
}


ComplexNumber ComplexNumber::operator+(const ComplexNumber &z) const{
    ComplexNumber w;
    w.RealPart = RealPart + z.RealPart;
    w.ImaginaryPart = ImaginaryPart + z.ImaginaryPart;
    return w;
}


ComplexNumber ComplexNumber::operator-(const ComplexNumber &z) const{
    ComplexNumber w;
    w.RealPart = RealPart - z.RealPart;
    w.ImaginaryPart = ImaginaryPart - z.ImaginaryPart;
    return w;
}


double ComplexNumber::GetRealPart() const{
    return RealPart;
}


double ComplexNumber::GetImaginaryPart() const{
    return ImaginaryPart;
}


std::ostream& operator<<(std::ostream& output, const ComplexNumber& z){
    output << "(" << z.RealPart << " ";
    if (z.ImaginaryPart >= 0.0){
        output << "+ " << z.ImaginaryPart << "i)";
    }
    else{
        output << "- " << -z.ImaginaryPart << "i)";
    }
    
    return output;
}
