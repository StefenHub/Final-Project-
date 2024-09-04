#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Hospital_Management_System{
      private: 


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
};

int main(){
      system ("cls");

      Hospital_Management_System Hospital;
      Hospital.mainMenu();
      return 0;
}