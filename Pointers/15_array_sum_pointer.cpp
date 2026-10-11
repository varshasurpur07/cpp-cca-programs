// 15_array_sum_pointer.cpp
// Program to find the sum of array elements using pointer arithmetic.

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "=== Sum of Array Elements Using Pointers ===\n";
    cout << "Enter the number of elements (1 to " << MAX_SIZE << "): ";
    if (!(cin >> n) || n <= 0 || n > MAX_SIZE) {
        cout << "Invalid input. Please enter a size between 1 and " << MAX_SIZE << ".\n";
        return 1;
    }

    // Input elements using pointer arithmetic
    int* ptr = arr; // ptr points to the base address arr[0]
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "]: ";
        cin >> *(ptr + i);
    }

    // Traverse and calculate sum using pointer
    long long sum = 0;
    int* current = arr;
    for (int i = 0; i < n; i++) {
        sum += *current;
        current++; // Move pointer to next element
    }

    cout << "\nArray elements displayed via pointer arithmetic: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    cout << "Total Sum: " << sum << "\n";

    return 0;
}
