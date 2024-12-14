//
//  time_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 12/13/24.
//

#ifndef time_functions_hpp
#define time_functions_hpp

#include <stdio.h>
#include <iostream>

namespace DateandTime{
class Time {
protected:
    int hours, minutes, seconds;
    
public:
    Time(int h, int m, int s);
    
    void addSeconds(int secs);
    void addMinutes(int mins);
    void addHours(int hrs);
    virtual void print() const;
};
}
#endif /* time_functions_hpp */
