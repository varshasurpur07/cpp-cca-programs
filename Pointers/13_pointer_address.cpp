// 13_pointer_address.cpp
// Program to display a variable's value and memory address using a pointer.

#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "=== Variable Value and Memory Address Using Pointers ===\n";
    cout << "Enter an integer value: ";
    if (!(cin >> number)) {
        cout << "Invalid input.\n";
        return 1;
    }

    // Declare a pointer and store the address of the variable
    int* ptr = &number;

    cout << "\nVariable Analysis:\n";
    cout << "Direct access:\n";
    cout << "  Value of 'number'         : " << number << "\n";
    cout << "  Address of 'number' (&)   : " << &number << "\n";

    cout << "\nPointer access:\n";
    cout << "  Value stored in 'ptr'     : " << ptr << " (Address of number)\n";
    cout << "  Value pointed by '*ptr'   : " << *ptr << " (Dereferenced value)\n";
    cout << "  Address of pointer '&ptr' : " << &ptr << "\n";

    // Modifying value through pointer
    *ptr = *ptr + 10;
    cout << "\nAfter modifying value via pointer (*ptr += 10):\n";
    cout << "  New value of 'number'     : " << number << "\n";

    return 0;
}
