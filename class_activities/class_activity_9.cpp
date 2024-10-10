//
//  class_activity_9.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string usCitizenInput;
    string bachelorDegreeInput;

    int yearExperiences;
    
    cout << "Are you a US Citizen? (yes or no)" << endl;
    getline(cin, usCitizenInput);
    
    cout << "Do you have a Bachelor Degree? (yes or no)" << endl;
    getline(cin, bachelorDegreeInput);
    
    cout << "How many years experience do you have? " << endl;
    cin >> yearExperiences;
    
    //Convert string to boolean
    bool usCitizen = usCitizenInput == "yes";
    bool hasBachelorDegree = bachelorDegreeInput == "yes";
    
    if (usCitizen)
        if (hasBachelorDegree || yearExperiences >= 2)
            cout << "You are Eligible for job!" << endl;
        else
            cout << "You are not Eligible for job!" << endl;
    else
        cout << "You are not Eligible for job!" << endl;
    
    return 0;
    
}
