//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <iomanip>
#include "grades_analysis.hpp"

using namespace std;
using namespace gradesAnalysis;

int main() {
    vector<string> students = {"Scott", "Naga", "Dennis", "Vincent", "Toro"};
    vector<int> grades = {85, 92, 78, 90, 88};

    // Sort students and grades
    sortStudentsAndGrades(students, grades);

    // Calculate average
    double average = calculateAverage(grades);
    
    // Find highest and lowest grades
    int highest, lowest;
    findHighestAndLowest(grades, highest, lowest);

    // Output results
    cout << fixed << setprecision(2);
    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    // Print students above average
    printAboveAverage(students, grades, average);
    
    cout << "Comparing students' grades:" << endl;
    compareStudentsGrades(students, grades);

    return 0;
}
