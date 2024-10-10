//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//
#include <stdio.h>
#include <iostream>
#include "swap_numbers.hpp"
using namespace std;
using namespace swapsortNumbers;

int main() {
    int listNumbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(listNumbers) / sizeof(listNumbers[0]);
    
    cout << "Numbers: ";
    for (int i = 0; i < size; i++) {
        cout << listNumbers[i] << " ";
    }
    cout << endl;

    sortNumbers(listNumbers, size);

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << listNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
