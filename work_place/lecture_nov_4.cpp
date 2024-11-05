//
//  lecture_nov_4.cpp
//  CIS25
//
//  Created by Minh Tran on 11/4/24.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

/*
struct Movie{
    int id;
    string title;
    int year;
};

int main(){
    
    
    
    ifstream file;
    file.open("/Users/delay/Desktop/CIS25/work_place/data.txt");
    if (file.is_open()){
        //file << "id, title, year" << endl;
        string str;
        //file >> str;
        getline(file, str);
        cout << str << endl;
        while (! file.eof()){
            getline(file, str, ',');
            if (str.empty()){
                continue;
            }
            Movie movie;
            movie.id = stoi(str);
            
            getline(file, str, ',');
            movie.title = str;
            
            getline(file, str);
            movie.year = stoi(str);
            cout << str << endl;
        }
        
        file.close();
    }
    

    ofstream file;
    file.open("hi");
    if (file.is_open()){
        file << "hello world!" << endl;
    cout << filesystem::current_path() << endl;
    }
    file.close();
     
    return 0;
}
*/

int main(){
    int numbers[3];
    ifstream file("/Users/delay/Desktop/CIS25/work_place/numbers.dat", ios::binary);
    if (file.is_open()){
        int number;
        while(file.read(reinterpret_cast<char*>(&numbers), sizeof(numbers))){
            cout << number;
        }
        //file.read(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        file.close();
    }
    
    
    /*
    int numbers[] = {1000'000, 2000'000, 3000'000};
    ofstream file 
        ("/Users/delay/Desktop/CIS25/work_place/numbers.dat", ios::binary);
    if (file.is_open()){
        file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
        file.close();
     */
    return 0;
}
    
//    ofstream file ("/Users/delay/Desktop/CIS25/work_place/numbers.txt");
//    if (file.is_open()){
//        for (auto number:numbers){
//            file << number << endl;
//        }
//        file.close();
//    }
    

