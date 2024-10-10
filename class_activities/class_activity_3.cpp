//
//  class_activity_3.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    //provide min and max value to limit the range
    const int maxValue = 6;
    const int minValue = 1;
    srand(time(0));
    
    //Roll dice
    int number_1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int number_2 = (rand() % (maxValue - minValue + 1)) + minValue;
    
    
    cout << "Dice 1: " << number_1 << endl;
    cout << "Dice 2: " << number_2 << endl;
    return 0;
    
}
