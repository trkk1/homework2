//
//  class_activity_6.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    string street;
    string state;
    string city;
    string zipcode;
    
    cout << "Enter your Street: " << endl;
    getline(cin, street);
    
    cout << "Enter your State: " << endl;
    getline(cin, state);
    
    cout << "Enter your City: " << endl;
    getline(cin, city);
    
    cout << "Enter your Zipcode: " << endl;
    getline(cin, zipcode);
    
    cout << "User's address" << endl;
    cout << street << endl;
    cout << state << ", " << city << ", " << zipcode << endl;
    
    return 0;
}
