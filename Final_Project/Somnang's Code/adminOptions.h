#pragma once
#include <iostream>
#include <string>

using namespace std;
void options() {
    // Add blank lines to center vertically
    for (int i = 0; i < 3; i++) {
        cout << '\n';
    }

    // Centered content with spaces
    cout << "================================================================" << '\n';
    cout << "================  Hospital Management System  ==================" << '\n';
    cout << "=====================  Admin Options  ==========================" << '\n';
    cout << "================================================================" << '\n';
    cout << "||                           1. Log in                        ||" << '\n';
    cout << "||                           2. Exit                          ||" << '\n';
    cout << "================================================================" << '\n';
}

