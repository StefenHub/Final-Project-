#include <string>
#include <vector>
#include <iostream>
#include <limits>  // Include this header for numeric_limits
#include "adminOptions.h"
#include "registerAdmin.h"
using namespace std;

int main() {
    system("cls");
    int choice;
    options();  // Assumed to display options to the user
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
            admin.login(username, password);  // Use the username and password to log in
            choose();
            
        }
        case 2: {
            cout << "==============================||Exited||==================================" << endl;
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
