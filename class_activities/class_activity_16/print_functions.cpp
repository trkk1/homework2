//
//  print_functions.cpp
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
    void printAboveAverage(const vector<string>& students, const vector<int>& grades, double average) {
        cout << "Students above average:" << endl;
        for (size_t i = 0; i < grades.size(); ++i) {
            if (grades[i] > average) {
                cout << students[i] << endl;
            }
        }
    }
}
