//
//  date_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#include "date_functions.hpp"
#include <iomanip>
#include <sstream>
#include <iostream>
using namespace std;
using namespace DateandTime;

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

bool Date::isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int Date::daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 30;
    }
}

void Date::addDays(int days) {
    day += days;
    while (day > daysInMonth(month, year)) {
        day -= daysInMonth(month, year);
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::addMonths(int months) {
    month += months;
    while (month > 12) {
        month -= 12;
        year++;
    }
    if (day > daysInMonth(month, year)) {
        day = daysInMonth(month, year);
    }
}

void Date::addYears(int years) {
    year += years;
    if (month == 2 && day == 29 && !isLeapYear(year)) {
        day = 28;
    }
}

void Date::print() const {
    cout << day << "/" << month << "/" << year << endl;
}
