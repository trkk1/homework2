//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 12/4/24.
//

#include <stdio.h>
#include <iostream>
#include "textbox_functions.hpp"
using namespace std;
using namespace textBox;
int main() {
    TextBox text1;
    text1.display();

   
    TextBox text2("Hi");
    text2.display();

    text1.setValue("New text");
    text1.display();

    return 0;
}
