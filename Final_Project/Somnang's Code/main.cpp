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
            password = getHiddenInput();
            admin.login(username, password);
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