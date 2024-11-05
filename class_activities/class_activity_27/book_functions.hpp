//
//  main.hpp
//  CIS25
//
//  Created by Minh Tran on 11/4/24.
//

#ifndef book_functions_hpp
#define book_functions_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

namespace bookFunctions{
struct Book {
    string title;
    string isbn;
    int quantity;
};

struct Inventory {
    vector<Book> books;
    
    void addBook(const Book& book);
    
    Book* findBook(const string& identifier);
    
    void displayBook() const;
};
}
#endif /* book_functions_hpp */
