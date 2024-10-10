//
//  sort_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include "swap_numbers.hpp"
using namespace std;

namespace swapsortNumbers {
void sortNumbers(int listNumbers[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (listNumbers[j] > listNumbers[j + 1]) {
                swap(listNumbers[j], listNumbers[j + 1]);
            }
        }
    }
}
}
