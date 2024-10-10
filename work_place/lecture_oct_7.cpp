//
//  lecture_oct_7.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int value[3] = {10, 20, 30};
    //int x = value[0];
    //int y = value[1];
    //int z = value[2];
    
    auto [x, y, z] = value;
    return 0;
}
