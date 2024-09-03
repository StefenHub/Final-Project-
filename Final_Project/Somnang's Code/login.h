#pragma once
#include <iostream>
#include <string>
#include "registerAdmin.h"

using namespace std;

class Login : public Admin{
    public: 
        string username, password;
        Login(string username, string password){
            this->username = username;
            this->password = password;
        }
        void login(string adminName, string adminPwd){
            cin.ignore();
            cout << "Enter your username: ";
            getline(cin, adminName);
            cout << "Enter your PIN: ";
            getline(cin, adminPwd);
            if(username == Admin.){

            }
        }



};