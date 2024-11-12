//
//  lecture_nov_6.cpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Rectangle.hpp" //classese example
using namespace std;

int main(){
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.height = 20;
    cout << rectangle.getArea() << endl;
    

    /*
    string str = "10 20";
    stringstream stream;
    stream.str(str);
    int first;
    stream >> first;
    int second;
    stream >> second;
    cout << first << endl;
    cout << second << endl;
    cout << first + second << endl;
    */
    
    return 0;
}
