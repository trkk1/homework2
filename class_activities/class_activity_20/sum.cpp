//
//  sum.cpp
//  CIS25
//
//  Created by Minh Tran on 10/15/24.
//

#include <stdio.h>
#include <iostream>
#include "sum_input_functions.hpp"
using namespace std;

namespace sumInput{
int calculateSum(int* arr, int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    return sum;
}
}
