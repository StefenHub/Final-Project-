#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "adminManage.h"
using namespace std;

//Hospital management system
//options
class Admin{
    public:
        string name;
        string password;
        Admin(string name, string password){
            this->name = name;
            this->password = password;
        }
        void registerAdmin(string username, string pwd){
            cin.ignore();
            cout << "Enter your username: ";
            getline(cin, username);
            cout << "Enter your PIN: ";
            cin >> pwd;
        }
        void getAdmin(){
            cout << "Successfully registered " << name << "!" << endl << endl;
        }
        void login(string adminName, string adminPwd){
            cin.ignore();
            cout << "Enter your username: ";
            getline(cin, adminName);
            cout << "Enter your PIN: ";
            getline(cin, adminPwd);
            if(adminName == name && adminPwd == password){
                secondTab();
            } else {
                cout << "Invalid credentials! Please try again." << endl;
                login(adminName, adminPwd);
            }
        }
};
