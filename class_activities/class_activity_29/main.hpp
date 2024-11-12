//
//  main.hpp
//  CIS25
//
//  Created by Minh Tran on 11/6/24.
//

#ifndef main_hpp
#define main_hpp

#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

namespace parseFunction{
struct Movie {
    string title;
    string season;
    int year;
};

inline void removeComma(string& input) {
    input.erase(remove(input.begin(), input.end(), ','), input.end());
}

Movie parseMovieString(const string& movieStr) {
    Movie movie;
    stringstream stream(movieStr);

    stream >> movie.title;

    stream >> movie.season;

    stream >> movie.year;

    return movie;
}
}
#endif /* main_hpp */
