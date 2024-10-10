//
//  grades_analysis.hpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#ifndef grades_analysis_hpp
#define grades_analysis_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

namespace gradesAnalysis {
void compareStudentsGrades(const vector<string>& names, const std::vector<int>& grades);
void sortStudentsAndGrades(vector<string>& students, vector<int>& grades);
double calculateAverage(const vector<int>& grades);
void findHighestAndLowest(const vector<int>& grades, int& highest, int& lowest);
void printAboveAverage(const vector<string>& students, const vector<int>& grades, double average);
}

#endif /* grades_analysis_hpp */
