//
//  class_activity_14.cpp
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
    
    long random = time(0);
    srand(static_cast<int>(random));
    int secretNumber = rand() % 10;
    int guessNum = 0;
    bool check = true;
    
    cout << "guess the secret number" << endl;

    while (check){
        cin >> guessNum;
        if (guessNum == secretNumber){
            cout << "you guessed the correct secret number" << endl;
            check = false;
        }
        else{
            cout << "not correct. guess the secret number again" << endl;
        }
    }
    
    return 0;
}
