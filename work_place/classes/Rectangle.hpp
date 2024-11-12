//
//  Rectangle.hpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
class Rectangle{
public:
    int getArea();
    void draw();
    
    int getWidth();
    int getHeight();
    void setWidth();
    void setHeight();
    
private:
    int width;
    int height;

};

#endif /* Rectangle_hpp */
