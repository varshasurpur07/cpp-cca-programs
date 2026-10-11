// 05_reverse_array.cpp
// Program to reverse an array in-place.

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "=== Reverse an Array ===\n";
    cout << "Enter the number of elements (1 to " << MAX_SIZE << "): ";
    if (!(cin >> n) || n <= 0 || n > MAX_SIZE) {
        cout << "Invalid input. Please enter a size between 1 and " << MAX_SIZE << ".\n";
        return 1;
    }

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }

    // In-place reversal using two pointers (start and end indices)
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "\nReversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
