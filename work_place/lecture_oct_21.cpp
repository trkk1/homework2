//
//  lecture_oct_21.cpp
//  CIS25
//
//  Created by Minh Tran on 10/21/24.
//

#include <stdio.h>
#include <iostream>

using namespace std;

struct Actor{
    string gender;
    string name;
};

struct Movie{
    string title;
    int releaseYear;
};

int main(){
    Movie movie = {"Wall-E", 2000};
    //string title = movie.title;
    //int releaseYear = movie.releaseYear;
    auto [title, releaseYear]{movie};
    
    
    
    
    /*
    Movie movie = {"hi", 3, 3};
    */
    
    
    /*
    int number = 10;
    Movie movie;
    movie.title = "Wall-E";
    movie.releaseYear = 3;
    movie.title = "Titanic";
    cout << movie.title;
     */
    
    
    /*
    string name = "ali";
    cout << name.back();
    //name[0] = 'm';
    cout << name[0] << endl;
    
    cout << name.front() << endl;
     */
    
    
    return 0;
}
