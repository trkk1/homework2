//
//  lecture_sept_11.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    int x = 1;
    double y = 2.2;
    double z = x + y;
    cout << z << endl;
    return 0;
    
}

/* //Narrowing Conversion
 
 int number = 1'000'000;
 short another = number;
 cout << another << endl;
 # will print out 16960
 
 short number = 2'000;
 int another = number;
 coud << another << endl;
 # will print out 2000
 
 */


/* //Creating a random number
 
 #include <cstdlib>
 #include <ctime>
 using namespace std;
 
 long elapsedSeconddes = time(0); //use nullprt
 srand(elapsedSeconddes);
 int number = rand() % 10; --> will print only from 0 to 9
 cout << number << endl; --> without srand(), it will print out 16807
 return 0;
 
 */

/* //Formatting the output
 
 #include <iomanip>
 
 1) For words.
 cout << left << setw(10) << "winter" << setw(10) << "cold" << endl
      << setw(10) << "summer" << right << setw(10) << "hot" << endl;
 return 0;
 # will print out |winter  cold and the other will print out |summer       hot.
 
2) For numbers.
 cout << fixed << setprecision(2) << 12.34567 << endl << 12.898764 << endl;
 return 0;
 #will print out 12.35 and 12.90
 #setprecision(2) only get the first two numbers after decimal
 
 */


/* //Date type's size and limits
 
 cout << "The size is: " << sizeof(int) << endl;
 cout << numeric_limits<int>::max() << endl;
 cout << numeric_limits<int>::min() << endl;
 return 0;
 #Print out 4 bytes. Print out the max and the min.
 
 */

/* //Working with booleans
 bool isNewUser = false;
 cout << boolalpha << isNewUser << endl;
 return 0;
 #will print false or true instead of 0 or 1
 
 
 */

/* //Working with strings and characters
 
 string name;
 cout << "Enter your name" << endl;
 getline(cin, name);
 cout << "Hi, " << name << endl;
 return 0;
 #will print everything even after the space because of using getline. ex: Hi, hot cold
 
 */

/* //Type conversion
 
 #Scenario 1
 int x = 1;
 double y = 2.2;
 double z = x + y;
 cout << z << endl;
 return 0;
 #print out 3.2
 
 #Scenario 2
 int x = 1;
 double y = 2.2;
 int z = x + static_cast<int>(y);
 cout << z << endl;
 return 0;
 #print out 3
*/
 
