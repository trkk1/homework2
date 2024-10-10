//
//  hw_1.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int num;
    
    cout << "Enter a positive number: ";
    cin >> num;
    
    cout << "Binary: ";
    
    //Print binary representation
    while (num > 0){
        cout << (num % 2);
        num = num / 2;
    }
    
    cout << endl;
   
    return 0;
}
