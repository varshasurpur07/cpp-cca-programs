// 14_swap_numbers.cpp
// Program to swap two numbers using pointers (call by reference with pointers).

#include <iostream>

using namespace std;

// Function to swap two integers using pointers
void swapNumbers(int* a, int* b) {
    int temp = *a; // Store the value pointed to by a
    *a = *b;       // Assign the value pointed to by b to the address of a
    *b = temp;     // Assign temp to the address of b
}

int main() {
    int x, y;

    cout << "=== Swap Two Numbers Using Pointers ===\n";
    cout << "Enter first number (x): ";
    if (!(cin >> x)) {
        cout << "Invalid input.\n";
        return 1;
    }

    cout << "Enter second number (y): ";
    if (!(cin >> y)) {
        cout << "Invalid input.\n";
        return 1;
    }

    cout << "\nBefore swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";

    // Pass the addresses of x and y
    swapNumbers(&x, &y);

    cout << "\nAfter swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";

    return 0;
}
