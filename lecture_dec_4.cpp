//
//  lecture_dec_4.cpp
//  CIS25
//
//  Created by Minh Tran on 12/4/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Time{
public:
    int getHour();
    int getMinute();
    int getSecond();
    
private:
    int hour();
    int minute();
    int second();
};

class Date{
public:
    int getYear();
    int getMonth();
    int getDay();
    
private:
    int year();
    int month();
    int day();
};



class DateTime:public Time, public Date{
public:
    
};


int main(){
    
}
