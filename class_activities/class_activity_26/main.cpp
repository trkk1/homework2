//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 11/11/24.
//

#include <stdio.h>
#include "point_functions.h"

using namespace std;
using namespace pointFunction;
int main() {
    Point p1(2, 5);
    Point p2(2, 5);
    Point p3(6, 9);

    if (p1 == p2) {
        cout << "p1 and p2 are equal." << endl;
    } else {
        cout << "p1 and p2 are not equal." << endl;
    }

    cout << "p3: " << p3 << endl;

    return 0;
}
