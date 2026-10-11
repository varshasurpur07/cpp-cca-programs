// 03_sort_array.cpp
// Program to sort array elements in ascending order using Bubble Sort.

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "=== Sort Array in Ascending Order ===\n";
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

    // Bubble Sort algorithm to sort in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted array in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
