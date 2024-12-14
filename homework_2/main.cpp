//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#include <stdio.h>
#include <iostream>
#include "dateTime_functions.hpp"
using namespace std;
using namespace DateandTime;

int main() {
    DateTime dt1(15, 1, 2024, 10, 30, 0);
    DateTime dt2(1, 2, 2025, 12, 0, 0);

    
    dt1.addDays(30);
    dt1.addMonths(2);
    dt1.addYears(1);

    dt1.addHours(5);
    dt1.addMinutes(50);
    dt1.addSeconds(120);

    
    cout << "Updated DateTime:" << endl;
    dt1.print();

    dt1.computeDifference(dt1, dt2);

    string formatted = dt1.format("Today is YYYY-MM-DD, and the time is HH:mm");
    cout << "Formatted DateTime: " << formatted << endl;

    return 0;
}
