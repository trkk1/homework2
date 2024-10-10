//
//  class_activity_7.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    string name[3];
    
    cout << "Enter the first name: " << endl;
    getline(cin, name[0]);
    
    cout << "Enter the second name: " << endl;
    getline(cin, name[1]);
    
    cout << "Enter the third name: " << endl;
    getline(cin, name[2]);
    
    cout << "The first name is: " << name[0] << endl;
    
    return 0;
}
