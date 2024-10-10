//
//  class_activity_5.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    cout << "The size for short is: " << sizeof(short) << endl;
    cout << "Short max is: " << numeric_limits<short>::max() << endl;
    cout << "Short min is: " << numeric_limits<short>::min() << endl;
    
    cout << "The size for double is: " << sizeof(double) << endl;
    cout << "Double max is: " << numeric_limits<double>::max() << endl;
    cout << "Double min is: " << numeric_limits<double>::min() << endl;
    
}
