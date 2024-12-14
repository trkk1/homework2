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
void Rectangle::setWidth(int width){
if (width < 0)
    throw invalid_argument("width")
this -> width = width
}

void Rectangle::setHeight(int height){
if(height < 0)
    throw invalid_argument("height")
this -> height = height
}
