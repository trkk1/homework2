//
//  search_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include "search_functions.hpp"
#include <iostream>
using namespace std;

namespace search{
int linearSearch(int listNumbers[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (listNumbers[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}
}
