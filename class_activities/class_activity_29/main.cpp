//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//


#include "main.hpp"
#include <iostream>
#include <sstream>

using namespace std;
using namespace parseFunction;


int main() {
    string input = "24 s2, 2014";
    
    removeComma(input);
    
    Movie movie = parseMovieString(input);
    
    cout << "Title: " << movie.title << endl;
    cout << "Season: " << movie.season << endl;
    cout << "Year: " << movie.year << endl;

    return 0;
}
