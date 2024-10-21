//
//  class_activity_22.cpp
//  CIS25
//
//  Created by Minh Tran on 10/20/24.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;
    
    cout << "Enter your full name: "; //Assume we have someone's full name
    getline(cin, fullName);
    
    //Separate the first name
    size_t firstSpace = fullName.find(' ');
    
    //Extract the first name
    string firstName = fullName.substr(0, firstSpace);
    
    //Separate the last name
    size_t lastSpace = fullName.rfind(' ');
    
    //Extract the last name
    string lastName = fullName.substr(lastSpace + 1);
    
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
    
    return 0;
}
