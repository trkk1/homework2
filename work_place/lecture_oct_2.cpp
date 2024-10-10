//
//  lecture_oct_2.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//size_t uses for big number
void print(int number[], int size){
    for (int i = 0; i < size; i++){
        cout << number[i] << endl;
    }
}
int main(){
    int first[] = {1, 2, 3 ,4};
    //int = sizeNumber = sizeof(number)/sizeof(int);
    int sizeNumber = size(first);
    for (int i = 0; i < sizeNumber; i++){
        cout << first[i] << endl;
    }
    
    int second[4];
    for (int i = 0; i < sizeNumber; i++){
        second[i] = first[i];
        cout << second[i] << endl;
    }
    
    cout << sizeof(size_t) << endl;
 }
/*
namespace messaging {
void greet(string name){
    cout << "hi " << name << endl;
}
}

//in different file
using std::cout;
using namespace messaging;



int main(){
    greet("ali");
    return 0;

}

*/
