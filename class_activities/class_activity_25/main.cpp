//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/23/24.
//

#include "customer_function.hpp"
using namespace std;
using namespace customerAddress;

int main() {
    Customer customer;

    // Get customer name
    cout << "Enter customer name: ";
    getline(cin, customer.name);

    // Get customer age
    cout << "Enter customer age: ";
    cin >> customer.age;
    cin.ignore();

    // Get address details
    cout << "Enter street address: ";
    getline(cin, customer.address.street);

    cout << "Enter city: ";
    getline(cin, customer.address.city);

    cout << "Enter zip code: ";
    getline(cin, customer.address.zipCode);

    cout << "\nCustomer Information:\n";
    cout << "Name: " << customer.name << endl;
    cout << "Age: " << customer.age << endl;
    cout << "Address: " << customer.address.street << ", "
         << customer.address.city << ", "
         << customer.address.zipCode << endl;

    return 0;
}
