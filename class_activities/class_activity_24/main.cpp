
#include <iostream>
#include "customer_functions.hpp"
using namespace storeCustomer;
using namespace std;



int main(){
    Customer customer;
    
    cout << "Enter your ID: ";
    cin >> customer.ID;
    
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, customer.name);
    
    cout << "Enter your email: ";
    getline(cin, customer.email);
    
    cout << "Customer ID: " << customer.ID << endl;
    cout << "Customer name: " << customer.name << endl;
    cout << "Customer email: " << customer.email << endl;
    
}
