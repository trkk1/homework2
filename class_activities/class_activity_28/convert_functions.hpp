//
//  main.hpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#ifndef convert_functions_hpp
#define convert_functions_hpp

#include <stdio.h>
#include <sstream>
#include <iostream>
#include <iomanip>
using namespace std;

namespace convertToString{
string convertString(double number, int precision){
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}
}
#endif /* convert_functions_hpp */
