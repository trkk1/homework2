//
//  date_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#ifndef date_functions_hpp
#define date_functions_hpp

#include <stdio.h>
#include <iostream>

namespace DateandTime{
class Date {
protected:
    int day, month, year;
    
    bool isLeapYear(int year);
    int daysInMonth(int month, int year);
    
public:
    Date(int d, int m, int y);
    
    void addDays(int days);
    void addMonths(int months);
    void addYears(int years);
    virtual void print() const;
};
}
#endif /* date_functions_hpp */
