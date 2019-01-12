//
//  main.cpp
//  CppSciComp
//
//  Created by Justin Owen on 1/12/19.
//  Copyright © 2019 Justin Owen. All rights reserved.
//

#include <iostream>
#include "Book.hpp"

int main(int argc, const char * argv[]) {
    
    Book my_favorite_book;
    
    my_favorite_book.author = "Lewis Carroll";
    my_favorite_book.title = "Alice's Adventures in Wonderland";
    my_favorite_book.publisher = "Macmillan";
    my_favorite_book.price = 199;
    my_favorite_book.format = "hardback";
    my_favorite_book.SetYearOfPublication(1865);
    
    
    std::cout << "year of publiction of " << my_favorite_book.title << " is " << my_favorite_book.GetYearOfPublication() << "\n";
    
    Book* p_book_im_reading = new Book;
    (*p_book_im_reading).author = "Daniel Kahneman";
    p_book_im_reading->title = "Thinking, Fast and Slow";
    
    std::cout << "I am reading " << p_book_im_reading->title << " by " << p_book_im_reading->author << ", its year of publication is " << p_book_im_reading->GetYearOfPublication() << "\n";
    
    return 0;
}
