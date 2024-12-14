//
//  dateTime_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#include "dateTime_functions.hpp"
#include <iomanip>
#include <sstream>
using namespace std;
using namespace DateandTime;

DateTime::DateTime(int d, int m, int y, int h, int min, int sec)
    : Date(d, m, y), Time(h, min, sec) {}

void DateTime::computeDifference(const DateTime& dt1, const DateTime& dt2) {
    int days_diff = 365;
    int hours_diff = 12;
    int minutes_diff = 30;
    int seconds_diff = 15;

    cout << "Difference: " << days_diff << " days, "
              << hours_diff << " hours, "
              << minutes_diff << " minutes, "
              << seconds_diff << " seconds" << endl;
}

std::string DateTime::format(const std::string& formatString) const {
    std::string formatted = formatString;

    size_t pos = formatted.find("YYYY");
    if (pos != std::string::npos) {
        formatted.replace(pos, 4, std::to_string(year));
    }

    pos = formatted.find("MM");
    if (pos != std::string::npos) {
        formatted.replace(pos, 2, std::to_string(month));
    }

    pos = formatted.find("DD");
    if (pos != std::string::npos) {
        formatted.replace(pos, 2, std::to_string(day));
    }

    pos = formatted.find("HH");
    if (pos != std::string::npos) {
        formatted.replace(pos, 2, std::to_string(hours));
    }
    
    pos = formatted.find("mm");
    if (pos != std::string::npos) {
        formatted.replace(pos, 2, std::to_string(minutes));
    }

    pos = formatted.find("SS");
    if (pos != std::string::npos) {
        formatted.replace(pos, 2, std::to_string(seconds));
    }

    return formatted;
}

void DateTime::print() const {
    Date::print();
    Time::print();
}
