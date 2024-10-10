//
//  swap_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include "swap_functions.hpp"
#include <iostream>
using namespace std;
namespace swapNumbers{
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
}
