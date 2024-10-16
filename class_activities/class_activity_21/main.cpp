//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/15/24.
//

#include "array_functions.hpp"
#include <iostream>
#include <memory>
using namespace std;
using namespace arrayFunctions;

int main() {
    unique_ptr<int[]> arr;
    int count, sum;

    arrayNumAndCalculateSum(arr, count, sum);

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
