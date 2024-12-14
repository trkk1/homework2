//
//  dateTime_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#ifndef dateTime_functions_hpp
#define dateTime_functions_hpp

#include <stdio.h>
#include <iostream>
#include "date_functions.hpp"
#include "time_functions.hpp"
using namespace std;

namespace DateandTime{
class DateTime : public Date, public Time {
public:
    DateTime(int d, int m, int y, int h, int min, int sec);
    
    void computeDifference(const DateTime& dt1, const DateTime& dt2);
    std::string format(const string& formatString) const;
    void print() const;
};
}
#endif /* dateTime_functions_hpp */
