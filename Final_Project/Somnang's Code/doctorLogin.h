#include <iostream>
#include <random>
#include <sstream>
#include <iomanip>

using namespace std;

// Function to generate a random 8-bit integer
uint8_t random8bit() {
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<uint8_t> dist(0, 255);
    return dist(gen);
}

// Function to convert an integer to a hex string with 2 digits
string to_hex(uint8_t num) {
    stringstream ss;
    ss << hex << setw(2) << setfill('0') << static_cast<int>(num);
    return ss.str();
}

// Function to generate a UUID v4
string generateUUID() {
    uint8_t uuid[16];

    // Generate random bytes
    for (int i = 0; i < 16; ++i) {
        uuid[i] = random8bit();
    }

    // Set version to 4 (UUID v4)
    uuid[6] = (uuid[6] & 0x0F) | 0x40;

    // Set variant to 10xx (variant 1)
    uuid[8] = (uuid[8] & 0x3F) | 0x80;

    // Convert to UUID string format
    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << to_hex(uuid[i]);
        if (i == 3 || i == 5 || i == 7 || i == 9) {
            ss << "-";
        }
    }

    return ss.str();
}

int main() {
    string uuid = generateUUID();
    cout << "Generated UUID: " << uuid << endl;
    return 0;
}
