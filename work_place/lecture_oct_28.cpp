//
//  lecture_oct_28.cpp
//  CIS25
//
//  Created by Minh Tran on 10/28/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct Date{
    short year;
    short month;
    short day;
    double time;
};

struct Movie{
    string title;
    Date releaseDate;
    bool equals(const Movie& movie){
        return (title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day);
    };
};

bool operator == (Movie first, Movie second){
    return (first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day);
};

ostream& operator << (ostream& stream, Movie& movie){
    stream << movie.title;
    return stream;
};

Movie getMovie(){
    Movie movie = {"24", 1999};
    return movie;
}

void showMovie(Movie* movie){
    cout << (*movie).title;
    cout << movie->title;
}

enum class Action{
    list = 1, //as soon as you initialize it, the complier know add is 2 and update is 3
    add,
    update
};

enum class Hi{
    list = 1,
    add,
    update
};

int main(){
//    int list = 1;
//    int add = 2;
//    int update = 3;
    cout << "1: list inventory" << endl;
    cout << "2: add invoice" << endl;
    cout << "3: updating the invoice" << endl;
    int input;
    cin >> input;
    
    if(input == static_cast<int>(Action::list)){
        cout << "inventory list" << endl;
    }
    
//    cout << "1: list inventory" << "\n"
//    << "2: add invoice" << "\n"
//    << "3: updating the invoice" << "\n";
    
    /*
    //Movie
    auto movie = getMovie();
    
    
    Movie movie1 = {
        "24",
        {1988, 10, 12}
    };
    
    Movie movie2 = {
        "24",
        {1988, 10, 12}
    };
    
//    if (movie1.title == movie2.title &&
//        movie1.releaseDate.year == movie2.releaseDate.year &&
//        movie1.releaseDate.month == movie2.releaseDate.month &&
//        movie1.releaseDate.day == movie2.releaseDate.day){
//        cout << "equal";
//    }
    if (movie1.equals(movie2))
        cout << "equal" << endl;
    
    if (movie1 == movie2)
        cout << "yay" << endl;
    
    cout << movie1 << endl;
     */
    
    return 0;
}
