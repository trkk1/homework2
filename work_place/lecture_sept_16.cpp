//
//  lecture_sept_16.cpp
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
    
    //for (int i = 0; i <= 5; i++)
        //cout << i << endl;
    
    long random = time(0);
    srand(random);
    int secretNumber = rand() % 10;
    int guessNum = 0;
    bool check = true;
    
    cout << secretNumber << endl;
    
    while (check){
        cout << "guess the secret number" << endl;
        cin >> guessNum;
        if (guessNum == secretNumber){
            cout << "you guessed the correct secret number" << endl;
            check = false;
        }
    }
    
    return 0;
}

/* //While loop
 
 int i = 0;
 while (i <= 5){
     cout << i << endl;
     i++;
 }
 
 */

/* //For loop
 1) For numbers
 int numbers[] = {1, 2, 3, 4};
 
 
 for (int i = 1; i < sizeof(numbers)/sizeof(int); i++)
     cout << numbers[i] << endl;
 
 for (int number:numbers)
     cout << number << endl;
 
 2) For characters
 string name = "Minh";
 
 for (char ch:name){
     cout << ch << endl;
 }

 
 */


/* //Ask a postive number then print the factorial of that positive number
 
 int positiveNumber;
 int fact = 1;
 
 cout << "Enter a postive number" << endl;
 cin >> positiveNumber;

 
 for (int i = 1; i <= positiveNumber; i++)
     fact = fact * i;

 cout << "The factorial of the positive number is: " << fact << endl;

 return 0;
 
 */
