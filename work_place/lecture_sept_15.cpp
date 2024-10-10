//
//  lecture_sept_15.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //user press 1 than creating the account
    
    //user press 2 then changing the password
    
    //user press 3 quit
    
    cout << "1 - Create account" << endl;
    cout << "2 - Change password" << endl;
    cout << "3 - Quit" << endl;
    cout << "Select an option: " << endl;
    
    short input;
    cin >> input;
    
    switch(input){
        case 1:
            cout << "You selected 1" << endl;
            break;
        case 2:
            cout << "You selected 2" << endl;
            break;
        default:
            cout << "Goodbye" << endl;
            
            
    }
    return 0;
}


/* //Comparison
 1. For numbers
 int x = 10;
 int y = 5;
 bool result = x == y;
 cout << result << endl;
 
 2. For characters
 char first = 'a';
 char second = 'A';
 bool result == first == second;
 cout << result << endl;
 
 */

/* //Logical Operators
 int age = 20;
 int salary = 3'000;
 bool isEligible = (age < 18 || age > 1) && (salary <= 2'000);
 # && is "and" -- || is "or"
 cout << boolalpha << isEligible << endl;
 return 0;
 
 */

/* //Order logical operators
 1. * /
 2. - +
 3. ()
 4. !
 5. &&
 6. ||
 
 bool a = true;
 bool b = false;
 bool c = true;
 
 bool result = (a || b) && c;
 cout << boolalpha << result << endl;
 
 return 0;
 
 */


/* //If Statements
 #include <iomanip>
 
 1. First Example
 int temperature = 80;
 if (temperature < 60)
     cout << "cold" << endl;
 else if (temperature > 90)
     cout << "hot" << endl;
 else
     cout << "not a valid temperature" << endl;
 
 cout << "done" << endl;
 return 0;
 
 2. Second Example
 bool isCitizen = false;
 bool caResident = true;
 short tuition = 0;
 
 //outter if statement
 if (isCitizen){
     
     //inner if statement
     if (!caResident){
         tuition = 1'000;
     }
 }
 else{
     tuition = 3'000;
 }
 
 cout << "The tuition for this student is: " << tuition << endl;
 
 return 0;

 */

/* //Conditional Operator
 1. First Scenario
 int sales = 11'000;
 double commission;

 if (sales > 10'000)
     commission = .1;
 else
     commission = .05;
 
 cout << "The commission is: " << commission << endl;
 
 return 0;
 
 2. Second Scenario
 int sales = 11'000;
 double commission = (sales > 10'000) ? .1 : 0.5;
 cout << "The commission is: " << commission << endl;
 return 0;
 
 */



/* //Switch Statement
 //user press 1 than creating the account
 
 //user press 2 then changing the password
 
 //user press 3 quit
 
 cout << "1 - Create account" << endl;
 cout << "2 - Change password" << endl;
 cout << "3 - Quit" << endl;
 cout << "Select an option: " << endl;

 short input;
 cin >> input;
 
 1) First method
 if (input == 1)
     cout << "You selected 1" << endl;
 else if (input == 2)
     cout << "You selected 2" << endl;
 else
     cout << "Goodbye!" << endl;
 return 0;
 
 2) Second method
 switch(input){
     case 1:
         cout << "You selected 1" << endl;
         break;
     case 2:
         cout << "You selected 2" << endl;
         break;
     case 3:
         cout << "Goodbye" << endl;
         
         
 }
 
 3) Different method
 
 //user press 1 than creating the account
 
 //user press 2 then changing the password
 
 //user press any number to quit
 
 switch(input){
     case 1:
         cout << "You selected 1" << endl;
         break;
     case 2:
         cout << "You selected 2" << endl;
         break;
     default:
         cout << "Goodbye" << endl;
         
         
 }
*/
