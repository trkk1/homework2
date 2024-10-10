//
//  swap_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include "swap_numbers.hpp"
using namespace std;

namespace swapsortNumbers{
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
}
