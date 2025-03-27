#include <stdio.h>
#include <iostream>
#include <stdexcept>

using namespace std;

void printMenu();

int main () {
    string userName, password;

    cout << "Login Prompts... " << endl;
    cout << endl;

    cout << "UserName: "; 
    getline(cin, userName);

    cout << "Password: ";
    getline(cin, password);
    cout << endl;

    cout << "Logging in..." << endl; 

    printMenu();
}

void printMenu(){
    int input;

    cout << "What would you like to do?" << endl;
    
    cout << "Press (0) to log out" << endl;
    cout << "Press (1) to view book availability" << endl;
    cout << "Press (2) to add/remove a book" << endl;
    cout << "Press (3) for account info" << endl;

    cin >> input;

    while (input != 0) {
        if (input == 1) {
            cout << "Press (1) to view a rating" << endl;
            cout << "Press (2) view a genre" << endl;
            cout << "Press (3) to browse popular reviews" << endl;
            
            cin >> input;
        }

        else if (input == 2) {
            cout << "Press (1) to add a book" << endl;
            cout << "Press (2) to remove a book" << endl;

            cin >> input;
        }
        
        else if (input == 3){
            cout << "Press (1) to view books checked out" << endl;
            cout << "Press (2) to pay late fees" << endl;
            cout << "Press (3) for other information" << endl; 

            cin >> input;
        }
    }

    if (input == 0) {
        cout << "Thanks for visiting the library!" << endl;
        cout << "Logging out..." << endl;
    }
}