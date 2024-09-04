#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "adminManage.h"
#include "hidePin.h"
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
        Admin(){

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
           // cout << "Enter your PIN: ";
            getHiddenInput();
            if(adminName == name && adminPwd == password){
                cout << "Login successful!" << endl << endl;
                system("pause");
                system("cls");
                secondTab();
            } else {
                cout << "Invalid credentials! Please try again." << endl;
                login(adminName, adminPwd);
            }
        }
};
