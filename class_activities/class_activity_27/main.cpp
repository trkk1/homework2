//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 11/4/24.
//

#include "book_functions.hpp"
#include <vector>
#include <iostream>
using namespace std;
using namespace bookFunctions;

void Inventory::addBook(const Book& book){
    books.push_back(book);
}

void Inventory::displayBook() const{
    if(books.empty()){
        cout << "No book available in the inventory." << endl;
        return;
    }
    for(const auto& book:books){
        cout << "Title: " << book.title << ", ISBN: " << book.isbn << ", Quantity: " << book.quantity << endl;
    }
}

Book* Inventory::findBook(const string& identifier){
    for (auto& book:books){
        if (book.title == identifier || book.isbn == identifier){
            return &book;
        }
    }
    return nullptr;
}

int main(){
    Inventory inventory;
    int choice;
    
    while (true) {
        cout << "Book Inventory" << endl;
        cout << "1. Add a Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Find a Book by Title or ISBN" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string title, isbn;
            int quantity;

            cout << "Enter book title: ";
            cin.ignore();
            getline(cin, title);

            cout << "Enter book ISBN: ";
            getline(cin, isbn);

            cout << "Enter book quantity: ";
            cin >> quantity;

            inventory.addBook({title, isbn, quantity});
            cout << "Book added successfully!" << endl;
        }
        else if (choice == 2) {
            inventory.displayBook();
        }
        else if (choice == 3) {
            string search;
            cout << "Enter book title or ISBN to search: ";
            cin.ignore();
            getline(cin, search);

            Book* foundBook = inventory.findBook(search);
            if (foundBook) {
                cout << "Found Book: " << foundBook->title << ", ISBN: " << foundBook->isbn << ", Quantity: " << foundBook->quantity << "\n";
            } else {
                cout << "Book not found.\n";
            }
        }
        else if (choice == 4) {
            cout << "Exiting the program." << endl;;
            break;
        }
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
