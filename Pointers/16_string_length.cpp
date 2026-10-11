// 16_string_length.cpp
// Program to find the length of a string using pointers.

#include <iostream>

using namespace std;

// Function to calculate string length using a character pointer
int getStringLength(const char* str) {
    const char* ptr = str;
    int length = 0;

    // Traverse until the null-terminating character '\0' is reached
    while (*ptr != '\0') {
        length++;
        ptr++; // Advance pointer to next character
    }

    return length;
}

int main() {
    const int MAX_LEN = 256;
    char text[MAX_LEN];

    cout << "=== String Length Calculation Using Pointers ===\n";
    cout << "Enter a string (spaces allowed): ";
    
    // Read an entire line of text including spaces
    cin.getline(text, MAX_LEN);

    int length = getStringLength(text);

    cout << "\nResults:\n";
    cout << "Entered string : \"" << text << "\"\n";
    cout << "String length  : " << length << " characters\n";

    return 0;
}
