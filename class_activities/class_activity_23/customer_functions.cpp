//
//  customer_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/23/24.
//

#include "customer_functions.hpp"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

namespace customerValidate {
bool validateCustomer(const string& customerNumber) {
    // Check the length of the customer number
    if (customerNumber.length() != 6) {
        return false;
    }
    
    // Check the first two characters are alphabetic
    for (int i = 0; i < 2; ++i) {
        if (!isalpha(customerNumber[i])) {
            return false;
        }
    }
    
    // Check the last four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!isdigit(customerNumber[i])) {
            return false;
        }
    }
    
    return true;
}
}
