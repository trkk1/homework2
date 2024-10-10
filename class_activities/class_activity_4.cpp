//
//  class_activity_4.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Define width
    const int columnWidth = 15;
    
    //Print Rows
    cout << left << setw(columnWidth) << "Course"
         << setw(columnWidth) << "Student" << endl;
    
    //Print Columns
    cout << left << setw(columnWidth) << "C++" << right
         << 100 << endl;
    
    cout << left << setw(columnWidth) << "Javascipt" << right << 50 << endl;
    return 0;
}
