//
//  class_activity_20.cpp
//  CIS25
//
//  Created by Minh Tran on 10/14/24.
//

#include <stdio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int* arr = nullptr; // Pointer to the dynamically allocated array
    int count = 0;
    int numbers;
    int sum = 0;
    int check;

    while (true) {
        cout << "Enter a number: ";
        cin >> numbers;

        // Allocate new memory for one additional element
        int* newArr = new int[count + 1];

        // Copy existing elements to the new array
        for (int i = 0; i < count; i++) {
            newArr[i] = arr[i];
        }
        newArr[count] = numbers; // Add the new number

        // Delete the old array and point to the new array
        delete[] arr;
        arr = newArr;
        count++;
        
        cout << "Stop the loop or not. ('0' to stop or '1' to continue): ";
        cin >> check;
        if (check == 0)
            break;
    }

    // Calculate sum
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;

    delete[] arr; // Free the allocated memory
    return 0;
}
