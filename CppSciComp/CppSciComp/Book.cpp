//
//  Book.cpp
//  CppSciComp
//
//  Created by Justin Owen on 1/12/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#include <cassert>
#include "Book.hpp"
Book::Book(){
    author = "unspecified";
    title  = "unspecified";
    publisher = "unspecified";
    format = "unspecified";
    
}
void Book::SetYearOfPublication(int year){
    assert ((year > 1440) && (year < 2020));
    yearOfPublication = year;
}

int Book::GetYearOfPublication() const{
    return yearOfPublication;
}
