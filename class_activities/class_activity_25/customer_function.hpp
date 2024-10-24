//
//  main.hpp
//  CIS25
//
//  Created by Minh Tran on 10/23/24.
//

#ifndef customer_function_hpp
#define customer_function_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

namespace customerAddress{
struct Address {
    string street;
    string city;
    string zipCode;
};


struct Customer {
    string name;
    int age;
    Address address;
};
}
#endif /* customer_function_hpp */
