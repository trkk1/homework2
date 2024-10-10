//
//  class_activity_15.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int ask = 0;

    cout << "Enter a number: ";
    cin >> ask;
           
    for (int x = 0; x < ask; x++){
        for (int y = 0; y <= x; y++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
