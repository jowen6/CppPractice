//
//  Book.hpp
//  CppSciComp
//
//  Created by Justin Owen on 1/12/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>

class Book{
public:
    std::string author, title, publisher, format;
    int price;
    void SetYearOfPublication(int year);
    int GetYearOfPublication() const;
    
private:
    int yearOfPublication;
};



#endif /* Book_hpp */
