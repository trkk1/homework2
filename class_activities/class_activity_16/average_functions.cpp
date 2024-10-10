//
//  average_functions.cpp
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
    double calculateAverage(const vector<int>& grades) {
        double sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return sum / grades.size();
    }
}
