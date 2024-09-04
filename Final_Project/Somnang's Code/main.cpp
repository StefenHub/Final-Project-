#include <string>
#include <vector>
#include <iostream>
#include "adminOptions.h"
#include "registerAdmin.h"

using namespace std;

int main(){
    system("cls");
    int choice;
    options();
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch(choice){
        case 1: {
            Admin admin;
            string username, password;
            admin.registerAdmin(username, password);
            system("cls");
            admin.getAdmin();
            options();
            main();
        }
        case 2: {
            Admin admin;
            string username, password;
            cout << "Enter username: ";
            cin.ignore();
            getline(cin, username);
            //cout << "Enter password: ";
            // getline(cin, password);
            admin.login(username, password);
            //break;
        }
        default: {
            cout << "Invalid choice. Please try again.\n";
            system("pause");
            main();
        }
    }
    return 0;
}