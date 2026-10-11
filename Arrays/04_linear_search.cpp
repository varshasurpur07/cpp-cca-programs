// 04_linear_search.cpp
// Program to search for a key element in an array using Linear Search.

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, key;

    cout << "=== Linear Search in Array ===\n";
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

    cout << "Enter element to search for: ";
    cin >> key;

    // Perform linear search
    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break; // Stop at the first occurrence
        }
    }

    // Output search results
    if (foundIndex != -1) {
        cout << "\nElement " << key << " found at index " << foundIndex << " (position " << (foundIndex + 1) << ").\n";
    } else {
        cout << "\nElement " << key << " was not found in the array.\n";
    }

    return 0;
}
