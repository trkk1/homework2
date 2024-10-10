//
//  highest_lowest_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include "grades_analysis.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace gradesAnalysis {
    void findHighestAndLowest(const vector<int>& grades, int& highest, int& lowest) {
        highest = lowest = grades[0];
        for (int grade : grades) {
            if (grade > highest) highest = grade;
            if (grade < lowest) lowest = grade;
        }
    }
}
