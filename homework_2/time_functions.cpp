//
//  time_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#include "time_functions.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
using namespace DateandTime;

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

void Time::addSeconds(int secs) {
    seconds += secs;
    while (seconds >= 60) {
        seconds -= 60;
        minutes++;
    }
    while (minutes >= 60) {
        minutes -= 60;
        hours++;
    }
    while (hours >= 24) {
        hours -= 24;
    }
}

void Time::addMinutes(int mins) {
    minutes += mins;
    while (minutes >= 60) {
        minutes -= 60;
        hours++;
    }
    while (hours >= 24) {
        hours -= 24;
    }
}

void Time::addHours(int hrs) {
    hours += hrs;
    while (hours >= 24) {
        hours -= 24;
    }
}

void Time::print() const {
    cout << setw(2) << setfill('0') << hours << ":"
              << setw(2) << setfill('0') << minutes << ":"
              << setw(2) << setfill('0') << seconds << endl;
}
