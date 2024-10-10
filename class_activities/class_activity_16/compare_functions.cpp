//
//  compare_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

namespace gradesAnalysis {
    void compareStudentsGrades(const vector<string>& names, const vector<int>& grades) {
        for (int i = 0; i < names.size(); ++i) {
            for (int j = i + 1; j < names.size(); ++j) {
                if (grades[i] > grades[j]) {
                    cout << names[i] << " has a higher grade than " << names[j] << endl;
                } else if (grades[i] < grades[j]) {
                    cout << names[i] << " has a lower grade than " << names[j] << endl;
                } else {
                    cout << names[i] << " has the same grade as " << names[j] << endl;
                }
            }
        }
    }
}
