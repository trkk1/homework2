//
//  array_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/15/24.
//

#include "array_functions.hpp"
#include <iostream>
#include <memory>
using namespace std;

namespace arrayFunctions{
void arrayNumAndCalculateSum(unique_ptr<int[]>& arr, int& count, int& sum) {
    count = 0;
    arr = nullptr;

    cout << "Enter elements (-1 to stop): " << endl;
    int input;
    while (true) {
        cin >> input;
        if (input == -1) 
            break;

        // Create a new array with count + 1
        auto newArr = make_unique<int[]>(count + 1); // Allocate new memory

        // Copy old elements to the new array
        for (int i = 0; i < count; ++i) {
            newArr[i] = arr[i]; // Copy previous elements
        }

        newArr[count] = input; // Add the new input
        arr = std::move(newArr); // Update arr to point to the new array
        ++count;
    }

    sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i]; 
    }
}
}
