//
//  lecture_sept_25.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

void greet(string & name){
    cout << "hello " << name << endl;
}

int main(){
    string name = "ali";
    greet(name);
    return 0;
}





/* //USING & TO GET THE EXACT VALUE
double increasePrice (double & price){
    return price *= 1.2;
}

int main(){
    double price = 100;
    increasePrice(price);
    cout << price << endl;
    
    
    return 0;
}
*/



/*
double calculateTax(double income, double taxRate = .1){
    return income * taxRate;
}

int main(){
    cout << calculateTax(10'000) << endl;
    return 0;
}

*/


/* class activity 16
int maxNumber(int firstNum, int secondNum){
    return max(firstNum, secondNum);
}
int main(){
    cout << maxNumber(6, 5) << endl;
    return 0;
}
*/


/* //Functions
 void greet(string name){
     cout << "hello: " << name << endl;
 }
 string greet(string name, string lastName){
     //cout << "hello" << "\t" << name << "\t" << lastName << endl;
     return name + " " + lastName;
 }
 int main(){
     string name = "ali";
     string lastName = "saremi";
     //string result;
     
     
     //result = greet(name, lastName);
     //greet(result);
     
     greet(greet(name, lastName));
     cout << "---------------" << endl;
    
     
     return 0;
 }

 
 
 
 
 */
