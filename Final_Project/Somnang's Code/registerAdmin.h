#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Hospital management system
//options
class Admin{
    public:
        string name;
        string password;
        void registerAdmin(string username, string pwd){
            cin.ignore();
            cout << "Enter your username: ";
            getline(cin, username);
            cout << "Enter your PIN: ";
            cin >> pwd;
        }
        void getAdmin(){
            cout << "Successfully registered " << name << "!" << endl;
        }
};


 