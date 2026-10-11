// 12_multiple_students.cpp
// Program to store and display details of multiple students using an array of structures.

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Structure definition for student record
struct Student {
    int rollNumber;
    string name;
    double gpa;
};

int main() {
    const int MAX_STUDENTS = 50;
    Student students[MAX_STUDENTS];
    int count;

    cout << "=== Multiple Student Records (Array of Structures) ===\n";
    cout << "Enter number of students (1 to " << MAX_STUDENTS << "): ";
    if (!(cin >> count) || count <= 0 || count > MAX_STUDENTS) {
        cout << "Invalid count. Must be between 1 and " << MAX_STUDENTS << ".\n";
        return 1;
    }

    for (int i = 0; i < count; i++) {
        cout << "\n--- Student #" << (i + 1) << " ---\n";
        cout << "Enter Roll Number: ";
        if (!(cin >> students[i].rollNumber)) {
            cout << "Invalid roll number.\n";
            return 1;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter Name: ";
        getline(cin, students[i].name);

        cout << "Enter GPA (0.0 to 4.0): ";
        if (!(cin >> students[i].gpa) || students[i].gpa < 0.0 || students[i].gpa > 4.0) {
            cout << "Invalid GPA value.\n";
            return 1;
        }
    }

    // Display all student records in tabular form
    cout << "\n=======================================================\n";
    cout << left << setw(12) << "Roll No" 
         << setw(30) << "Name" 
         << right << setw(10) << "GPA" << "\n";
    cout << "-------------------------------------------------------\n";

    for (int i = 0; i < count; i++) {
        cout << left << setw(12) << students[i].rollNumber
             << setw(30) << students[i].name
             << right << setw(10) << fixed << setprecision(2) << students[i].gpa << "\n";
    }
    cout << "=======================================================\n";

    return 0;
}
