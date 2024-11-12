//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#include "convert_functions.hpp"
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;
using namespace convertToString;

int main(){
    double number = 12.34;
    string str = convertString(number, 2);
    cout << str << endl;
    return 0;
}
