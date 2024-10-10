//
//  class_activity_13.cpp
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
    double sum = 0.0;
    double temp = 0.0;
    int count = 0;
    string option;
    
    
    cout << "Enter a temperature: ";
    cin >> temp;
    
    //initialize the sum and count with the first temperature
    sum += temp;
    count++;
    
    cout << "Do you want to enter another temperature? (yes or no)" << endl;
    cin >> option;
    
    while (true) {
        if (option == "no" || option == "No"){
            break; //exit the loop or terminate the loop
        }
        else if (option == "yes" || option == "Yes"){
            double temperature;
            cout << "Enter another temperature: ";
            cin >> temperature;
            
            //add new temperature to the sum and increment the count.
            sum += temperature;
            count++;
            
            cout << "Do you want to enter another temperature? (yes or no)" << endl;
            cin >> option;
        }
        else{
            cout << "Invalid option. Please enter 'yes' or 'no'!" << endl;
            cin >> option;
        }
    }
    
        if (count > 0){
            double averageTemp = sum / count;
            cout << "The average temperature is: " << averageTemp << endl;
        }
        else {
            cout << "No temperatures were entered." << endl;
        }
    return 0;
}
