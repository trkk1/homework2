//
//  textbox_functions.cpp
//  CIS25
//
//  Created by Minh Tran on 12/4/24.
//

#include <iostream>
#include "textbox_functions.hpp"
using namespace std;
using namespace textBox;

TextBox::TextBox() : value("") {}

TextBox::TextBox(const string& text) : value(text) {}

string TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const string& text) {
    value = text;
}

void TextBox::display() const {
    cout << "TextBox value: " << value << endl;
}

