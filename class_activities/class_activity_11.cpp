//
//  class_activity_11.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double value1;
    double value2;
    //double largestValue;
    
    cout << "Enter the first value: " << endl;
    cin >> value1;
    
    cout << "Enter the second value: " << endl;
    cin >> value2;
    
    /*
    if (value1 > value2)
        largestValue = value1;
    else
        largestValue = value2;
     */
    
    double largestValue = (value1 > value2) ? value1: value2;
    
    cout << "The largest Value is: " << largestValue << endl;
    
    return 0;
}
