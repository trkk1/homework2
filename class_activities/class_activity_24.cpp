//
//  class_activity_24.cpp
//  CIS25
//
//  Created by Minh Tran on 10/21/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Customer{
    int ID;
    string name;
    string email;
};

int main(){
    Customer customer;
    cout << "Enter your ID: ";
    cin >> customer.ID;
    
    cout << "Enter your name: ";
    cin >> customer.name;
    
    cout << "Enter your email: ";
    cin >> customer.email;
    
    cout << "Customer ID: " << customer.ID << endl;
    cout << "Customer name: " << customer.name << endl;
    cout << "Customer email: " << customer.email << endl;
    
}
