//
//  array_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 10/15/24.
//

#ifndef array_functions_hpp
#define array_functions_hpp

#include <stdio.h>
#include <iostream>
#include <memory>
using namespace std;

namespace arrayFunctions{
void arrayNumAndCalculateSum(std::unique_ptr<int[]>& arr, int& count, int& sum);
}
#endif /* array_functions_hpp */
