//
//  class_activity_10.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sales;
    double commissionRate;
    double commission;
    
    cout << "Enter the sales amount: $" << endl;
    cin >> sales;
    
    if (sales <= 10000)
        commissionRate = 0.10;
    else if (sales <= 15000)
        commissionRate = 0.15;
    else
        commissionRate = 0.20;
    
    commission = sales * commissionRate;
    
    cout << "Sales Amount: $" << sales << endl;
    cout << "Commissiom Rate: " << commissionRate * 100 << "%" << endl;
    cout << "Commission: $" << sales << endl;
    
    return 0;
}
