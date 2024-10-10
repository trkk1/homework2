//
//  sort_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include "grades_analysis.hpp"
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

namespace gradesAnalysis {
    void sortStudentsAndGrades(vector<string>& students, vector<int>& grades) {
        for (size_t i = 0; i < grades.size(); ++i) {
            for (size_t j = 0; j < grades.size() - 1; ++j) {
                if (grades[j] > grades[j + 1]) {
                    swap(grades[j], grades[j + 1]);
                    swap(students[j], students[j + 1]);
                }
            }
        }
    }
}
