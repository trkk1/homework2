//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/23/24.
//

#include <stdio.h>
#include <iostream>
#include "customer_functions.hpp"
using namespace std;
using namespace customerValidate;

int main() {
    string customerNumber;

    // Prompt the user to enter a customer number
    cout << "Enter the customer number (format: AA1234): ";
    cin >> customerNumber;

    // Validate and output the result
    if (validateCustomer(customerNumber)) {
        cout << "Valid customer number." << endl;
    } else {
        cout << "Invalid customer number." << endl;
    }

    return 0;
}
