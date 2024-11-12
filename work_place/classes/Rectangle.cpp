//
//  Rectangle.cpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#include "Rectangle.hpp"
#include <iostream>
using namespace std;


void Rectangle::draw(){
    cout << "drawing the rectangle" << endl;
    cout << "width dimension: " << width << endl;
    cout << "height dimension: " << height << endl;
    cout << "the area is: " << getArea() << endl;
}

int Rectangle::getArea(){
    return width * height;
}

//getters
int Rectangle::getWidth(){
    return width;
}

int Rectangle::getHeight(){
    return height;
}

//setters
void Rectangle::setWidth(){
    
}

void Rectangle::setHeight(){
    
}
