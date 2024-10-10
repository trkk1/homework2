//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include "swap_functions.hpp"
using namespace std;
using namespace swapNumbers;

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swapping: x = " << x << ", " << "y = " << y << endl;
    swap(&x, &y); 
    cout << "After swapping: x = " << x << ", " << "y = " << y << endl;
   

    return 0;
}
