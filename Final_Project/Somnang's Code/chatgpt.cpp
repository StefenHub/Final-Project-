#include <string>
#include <vector>
#include <iostream>
#include <limits>  // For numeric_limits
#include "adminOptions.h"
#include "registerAdmin.h"

using namespace std;

// Function prototypes
void options();
string getHiddenInput();
void showAnotherTab();  // For demonstration, this will now call secondTab
void secondTab();  // Add prototype for secondTab function

class Admin {
public:
    // Method to log in
    bool login(const string& username, const string& password) {
        // For demonstration purposes, using hardcoded username and password
        const string correctUsername = "admin";
        const string correctPassword = "password123";

        return (username == correctUsername && password == correctPassword);
    }
};

// Function definitions

void options() {
    cout << "1. Log in" << endl;
    cout << "2. Exit" << endl;
}

string getHiddenInput() {
    string password;
    char ch;

    // Hide input (for password)
    cout << "Enter password: ";
    while ((ch = getchar()) != '\n') {
        if (ch == 127 || ch == '\b') {  // Handle backspace
            if (!password.empty()) {
                cout << "\b \b";  // Erase the last asterisk
                password.pop_back();
            }
        } else {
            password.push_back(ch);
            cout << '*';  // Print asterisk
        }
    }
    cout << endl;
    return password;
}

void secondTab() {
    cout << "================================================================" << '\n';
    cout << "==================Hospital Management System====================" << '\n';
    cout << "========================Admin Options===========================" << '\n';
    cout << "|||||||||||||||||||||||| 1. Available Dates|||||||||||||||||||||" << '\n';
    cout << "|||||||||||||||||||||||| 2. List of Appointments |||||||||||||||||||||||||||||" << '\n';
    cout << "|||||||||||||||||||||||| 3.  Update Appointments ||||||||||||||||||||||||||||" << '\n';
    cout << "|||||||||||||||||||||||| 4. Search Appointments  ||||||||||||||||||||||||||||" << '\n';
    cout << "|||||||||||||||||||||||| 5.  Delete Appointments ||||||||||||||||||||||||||||" << '\n';
    cout << "================================================================" << '\n';
}

int main() {
    system("cls");
    int choice;
    options();
    cout << "\nEnter your choice: ";
    cin >> choice;

    // Clear the input buffer after reading choice
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Corrected to clear input buffer

    switch (choice) {
        case 1: {
            system("cls");
            Admin admin;
            string username, password;

            cout << "==============================||Admin Log In||==================================" << endl;

            cout << "Enter username: ";
            getline(cin, username);  // Read the username input

            password = getHiddenInput();  // Get hidden password input

            if (admin.login(username, password)) {
                secondTab();  // Show the admin options menu if login is successful
            } else {
                cout << "Invalid username or password. Please try again.\n";
                system("pause");
                main();
            }
            break;
        }
        case 2: {
            cout << "Exiting program." << endl;
            break;
        }
        default: {
            cout << "Invalid choice. Please try again.\n";
            system("pause");
            main();
        }
    }
    return 0;
}
