//
//  lecture_sept_23.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//Functions
void number(){
    double number = 10;
    cout << number << endl;
}

int totalNumber(){
    int total = 20;
    return total;
}

int main(){
    number();
    int totalNumberOfIntraction = totalNumber();
    cout << totalNumberOfIntraction << endl;
}




/* //Continue
 
 for (int i = 1; i <= 5; i++){
     if (i % 3 != 0){
         cout << i << endl;
     }
     
    OR
 
     if (i % 3 == 0)
         continue;
      cout << i << endl;
 }
 */
 

 /* //Break

while (true){
    cout << "What is the number: " << endl;
    int number;
    cin >> number;
    if (number >= 1 && number <- 5){
        break;
    }
    cout << "Error! Enter a number between 1 to 5" << endl;
}
 
*/

/* //Class Activity 15
 
 #include <stdio.h>
 #include <iostream>
 using namespace std;
 int main(){
     //give a number 1 to 5
     //if less than 1
     //less than 2
     
     int ask = 0;

     cout << "Enter a number: ";
     cin >> ask;
            
     for (int x = 0; x < ask; x++){
         for (int y = 0; y <= x; y++)
             cout << "*";
         cout << endl;
     }
     
     return 0;
 }
 
 
 
 */
