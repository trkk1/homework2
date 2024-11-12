//
//  point_functions.h
//  CIS25
//
//  Created by Minh Tran on 11/11/24.
//

#ifndef point_functions_h
#define point_functions_h
#include <iostream>
using namespace std;

namespace pointFunction{
struct Point {
    int x, y;
    
    Point(int x_val, int y_val) : x(x_val), y(y_val) {}
    
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};


ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}
}
#endif /* point_functions_h */
