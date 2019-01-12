//
//  LRUCache.hpp
//  CppPractice
//
//  Created by Justin Owen on 11/28/18.
//  Copyright © 2018 Justin Owen. All rights reserved.
//

#ifndef LRUCache_hpp
#define LRUCache_hpp

#include <stdio.h>
#include <iostream>
#include <list>
#include <iterator>
#include <unordered_map>

using namespace std;

class LRUCache{
public:
    LRUCache(int);
    void refer(int);
    void display();
    
    list<int> dq;
    unordered_map<int, list<int>::iterator> ma;
    int csize;
    
    
};

#endif /* LRUCache_hpp */
