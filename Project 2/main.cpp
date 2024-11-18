//
//  main.cpp
//  CIS25
//
//  Created by Minh Tran on 11/15/24.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include "theater_functions.hpp"
using namespace std;
using namespace theaterFuctions;

int main(){
    //Initialize the movies: Movie, time, price, and available seats.
    vector<Movie> movies = {
        {"Deadpool", "11:00 AM", 15.99f, 35},
        {"The Conjuring", "9:00 PM", 12.99f, 30},
        {"Happiness", "2:00 PM", 14.99f, 40}
    };
    
    vector<shared_ptr<Booking>> bookings; //Store all the bookings made
    
    // Load bookings from file if available
    //loadBookingsFromFile(movies, bookings);
    
    
    int choice;
    do{
        cout << "--- Theater Booking ---" << endl;
        cout << "1. View Available Movies" << endl;
        cout << "2. Book Tickets" << endl;
        cout << "3. View Bookings" << endl;
        cout << "4. Save Bookings to File" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                displayMovies(movies);
                break;
            case 2:
                bookTickets(movies, bookings);
                break;
            case 3:
                viewBookings(bookings);
                break;
            case 4:
                saveBookingsToFile(bookings);
                break;
            case 5:
                cout << "Exiting the system..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5); //Keep show the menu until they choose to exit
    
    return 0;
}

