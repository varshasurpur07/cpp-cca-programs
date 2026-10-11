// 01_sum_average.cpp
// Program to find the sum and average of elements in an array.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "=== Sum and Average of Array Elements ===\n";
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

    // Calculate sum
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / n;

    cout << "\nResults:\n";
    cout << "Sum: " << sum << "\n";
    cout << fixed << setprecision(2);
    cout << "Average: " << average << "\n";

    return 0;
}
