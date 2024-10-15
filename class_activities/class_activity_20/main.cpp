//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/15/24.
//

#include <stdio.h>
#include <iostream>
#include "sum_input_functions.hpp"
using namespace sumInput;
using namespace std;

int main() {
    int* arr = nullptr; // Pointer to the dynamically allocated array
    int count = 0;

    readInput(arr, count);
    int sum = calculateSum(arr, count);

    cout << "Sum: " << sum << endl;

    delete[] arr; // Free the allocated memory
    return 0;
}
