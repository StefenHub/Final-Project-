#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Hospital_Management_System{
      private: 
      int choice;

      public: 
      void mainMenu(){
            cout << "=================================" << endl;
            cout << "|   HospitaL Management System  |" << endl;
            cout << "=================================" << endl;
            cout << "| => [1]. Admin                 |" <<endl;
            cout << "| => [2]. Doctor                |" <<endl;
            cout << "| => [3]. Patient               |" <<endl;
            cout << "| => [4]. Exit                  |" << endl;
            cout << "=================================" << endl;
      }

      void adminMenu(){

      }

      void doctorMenu(){

      }

      void patientMenu(){

      }

      void proccessMenu(){

      }

      int getOptoin(){
            cin >> choice;
            return choice;
      }

};

int main(){
      system ("cls");

      Hospital_Management_System Hospital;
      Hospital.mainMenu();
      return 0;
}