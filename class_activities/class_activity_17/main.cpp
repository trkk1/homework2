//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include "search_functions.hpp"
using namespace std;
using namespace search;


int main() {
    int listNumbers[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(listNumbers) / sizeof(listNumbers[0]);
    int target = 10;
    
    int result = linearSearch(listNumbers, n, target);
    
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
