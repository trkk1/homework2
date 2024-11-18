//
//  theater_functions.hpp
//  CIS25
//
//  Created by Minh Tran on 11/15/24.
//

#ifndef theater_functions_hpp
#define theater_functions_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <iomanip>
#include <memory>
#include <fstream>

using namespace std;

namespace theaterFuctions{
// Enumeration for booking status
enum BookingStatus { PENDING, CONFIRMED };

//Struct to represent a movie
struct Movie {
    string title;
    string showtime;
    float price;
    int availableSeats;
};

//Struct to represent a booking
struct Booking {
    string customerName;
    string movieTitle;
    int ticketNumber;
    BookingStatus status;

    Booking(string name, string title, int tickets)
        : customerName(name), movieTitle(title), ticketNumber(tickets), status(PENDING) {}
};

const int MAX_TICKETS = 10;

void displayMovies(const vector<Movie>& movies){
    cout << "\nAvailable Movies: " << endl;
    //Iterate through each movie in the vector and display details.
    for (size_t i = 0; i < movies.size(); ++i){
        cout << i + 1 << ". " << movies[i].title << ", Showtime: " << movies[i].showtime
        << ", Price: $" << movies[i].price << ", Available Seats: " << movies[i].availableSeats <<endl;
    }
    cout << "\n";
}

// Function to check if the booking already exists
bool isDuplicateBooking(const vector<shared_ptr<Booking>>& bookings, const shared_ptr<Booking>& newBooking) {
    for (const auto& booking : bookings) {
        if (booking->customerName == newBooking->customerName &&
            booking->movieTitle == newBooking->movieTitle &&
            booking->ticketNumber == newBooking->ticketNumber) {
            return true; // Duplicate booking found
        }
    }
    return false; // No duplicate
}


void bookTickets(vector<Movie>& movies, vector<shared_ptr<Booking>>& bookings){
    int movieChoice;
    int ticketNumber;
    string customerName;
    
    displayMovies(movies); //Display all available movies
    
    //Ask the user to select a movie by number.
    cout << "Enter the movie number to book tickets: ";
    cin >> movieChoice;
    
    //Check to see if the movie choice is valid
    if(movieChoice < 1 || movieChoice > movies.size()){
        cout << "Invalid movie choice." << endl;
        return;
    }
    
    //Access the selected movie from the vector
    Movie& selectedMovie = movies[movieChoice - 1];
    
    //Ask for the user's name
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, customerName);
    
    //Ask the number of tickets the user wants to book
    cout << "Enter the number of tickets: ";
    //cin >> ticketNumber;
    
    // Validate input for the ticket number
    while (!(cin >> ticketNumber) || ticketNumber <= 0) {
        cout << "Please enter a valid number of tickets: ";
        cin.clear(); // clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
    }
    
    //Check to see if seats are available
    if(ticketNumber > selectedMovie.availableSeats){
        cout << "Not enough available seats." << endl;
        return; //Exit if there's no more seats.
    }
    
    // Enforce maximum ticket limit
    if (ticketNumber > MAX_TICKETS) {
        cout << "You can only book up to " << MAX_TICKETS << " tickets." << endl;
        return;
    }
    
    selectedMovie.availableSeats -= ticketNumber; //Update the number of the available seats after booking
    

    // Create a new booking
    auto newBooking = make_shared<Booking>(customerName, selectedMovie.title, ticketNumber);

    // Check if this booking is a duplicate
    if (isDuplicateBooking(bookings, newBooking)) {
        cout << "This booking already exists!\n";
        return;
    }

    // Add the new booking to the bookings vector
    bookings.push_back(newBooking);
    cout << "Booking confirmed for " << customerName << " (" << ticketNumber << " tickets).\n";
}

void viewBookings(const vector<shared_ptr<Booking>>& bookings){
    if (bookings.empty()) {
        cout << "No bookings available.\n";
        return;
    }
    
    cout << "Current Bookings: " << endl;
    //Iterate through all the bookings and display details
    for(const auto& booking: bookings){
        cout << "Customer: " << booking->customerName << ", Movie: " << booking->movieTitle
             << ", Tickets: " << booking->ticketNumber
             << ", Status: " << (booking->status == CONFIRMED ? "Confirmed" : "Pending") << "\n" << endl;
    }
}

// Function to save bookings to a file
void saveBookingsToFile(const vector<shared_ptr<Booking>>& bookings) {
    ofstream outFile("bookings.txt");
    
    if (!outFile) {
        cout << "Error opening file for saving bookings." << endl;
        return;
    }

    for (const auto& booking : bookings) {
        outFile << booking->customerName << ","
                << booking->movieTitle << ","
                << booking->ticketNumber << ","
                << (booking->status == CONFIRMED ? "Confirmed" : "Pending") << "\n";
    }

    cout << "Bookings saved to file." << endl;
    
    for (auto& booking : bookings) {
        booking->status = CONFIRMED; // Change status to confirmed after saving
    }
}

// Function to load bookings from a file
void loadBookingsFromFile(vector<Movie>& movies, vector<shared_ptr<Booking>>& bookings) {
    ifstream inFile("bookings.txt");

    if (!inFile) {
        cout << "No previous bookings found." << endl;
        return;
    }

    string customerName;
    string movieTitle;
    string status;
    int ticketNumber;

    while (getline(inFile, customerName, ',')) {
        getline(inFile, movieTitle, ',');
        inFile >> ticketNumber;
        inFile.ignore(); // Skip the comma
        getline(inFile, status);

        BookingStatus bookingStatus = (status == "Confirmed") ? CONFIRMED : PENDING;

        auto booking = make_shared<Booking>(customerName, movieTitle, ticketNumber);
        booking->status = bookingStatus;

        // Check for duplicates before adding to the bookings vector
        bool isDuplicate = false;
        for (const auto& existingBooking : bookings) {
            if (existingBooking->customerName == booking->customerName &&
                existingBooking->movieTitle == booking->movieTitle &&
                existingBooking->ticketNumber == booking->ticketNumber) {
                isDuplicate = true;
                break;
            }
        }

        // Only add the booking if it's not a duplicate
        if (!isDuplicate) {
            bookings.push_back(booking);
        }

        inFile.ignore(); // Skip the newline
    }

    cout << "Bookings loaded from file." << endl;
}
}
#endif /* theater_functions_hpp */
