//
//  class_activity_12.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int positiveNumber;
    int fact = 1;
    
    cout << "Enter a postive number" << endl;
    cin >> positiveNumber;

    
    for (int i = 1; i <= positiveNumber; i++)
        fact = fact * i;

    cout << "The factorial of the positive number is: " << fact << endl;

    return 0;
    
}
