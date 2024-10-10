//
//  theater.cpp
//  CIS25
//
//  Created by Minh Tran on 10/10/24.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

//Constant for the numbers of rows and columns.
const int rows = 6;
const int columns = 9;

//Create the seat layout
void seatChart(const vector<vector<bool>> & seats){
    cout << "Seat layout" << endl;
    for (int a = 0; a < rows; a++){
        for (int b = 0; b < columns; b++){
            //Display X for taken seats and empty brackets for available seats.
            if (seats[a][b]){
                cout << "[X] ";
            }
            else{
                cout << "[ ] ";
            }
        }
        cout << endl;
    }
}

int main(){
    vector<string> movies {"Deadpool", "Toy Story 3", "The Conjuring", "Rush Hour"}; //List of movies
    vector<int> ageRatings {18, 0, 16, 13}; //Ages corresponding to each movie
    vector <int> ticketPrices {7, 15, 10}; //Prices for Child, Adult and Senior
    vector<int> ages; //Store ages of the buyers
    string selectedMovie;
    int checkAge;
    
    
    bool firstMovie = true; //Check if print correctly
    cout << "Select a movie: ";
    for (const auto & movie : movies){
        //Print out list of the movies
        if (!firstMovie){
            cout << ", "; //Add comma all except the first movie.
        }
        cout << movie;
        firstMovie = false; //Update after the first iteration
    }
    cout << endl;
    getline(cin, selectedMovie);
    
    int numTickets = 0;
    cout<< "Number of Tickets: ";
    cin >> numTickets;

    //Loop to get all the ages of each ticket.
    for (int i = 0; i < numTickets; i++){
        cout << "Enter age for the ticket " << (i + 1) << ": ";
        cin >> checkAge;
        ages.push_back(checkAge); //Store the ages to the empty list
    }
    
    bool canWatch = true; //Check to see if they can watch it or not
    for (int age : ages){
        if ((selectedMovie == "Deadpool" && age < 18) || (selectedMovie == "Toy Story 3" && age < 0) || (selectedMovie == "The Conjuring" && age < 16) || (selectedMovie == "Rush Hour" && age < 13)){
            canWatch = false;
            break; //exit the loop after finding invalid age
        }
    }
    
    if (canWatch){
        int totalPrices = 0;
        for (int age : ages){
            if (age < 13){
                totalPrices += ticketPrices[0]; //Child ticket price
            }
            else if (age < 65){
                totalPrices += ticketPrices[1]; //Adult ticket price
            }
            else{
                totalPrices += ticketPrices[2]; //Senior ticket price
            }
        }
        cout << "Total amount need to pay: $" << totalPrices << endl;
        
        
        //Initialize the seat chart as a vector of a vector of boolean value.
        vector<vector<bool>> seats(rows, vector<bool>(columns, false));
        
        seatChart(seats); //Print out all of the empty seats
        
        
        //Loop each ticket to select seat
        for (int i = 0; i < numTickets; i++){
            int row;
            int col;
            
            while(true){
                cout << "Select a seat for ticket " << (i + 1) << " (row and column): ";
                cin >> row >> col;
                
                if (row < 1 || row > rows || col < 1 || col > columns) {
                    cout << "Invalid seat selection. Please try again." << endl;
                    continue;
                }

                // Convert to zero-based index
                row -= 1;
                col -= 1;

                // Check if the seat is available
                if (seats[row][col]) {
                    cout << "Seat already taken. Please choose another seat." << endl;
                }
                else {
                    seats[row][col] = true; // Mark the seat as taken
                    break; // Exit the loop if a seat is successfully selected
                }
            }
            
        }
        cout << "Seats selected!" << endl;
        seatChart(seats);
    }
    else{
        cout << "You or the others cannot watch " << selectedMovie << endl;
    }
    return 0;
}
