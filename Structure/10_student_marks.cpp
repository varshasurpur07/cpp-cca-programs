// 10_student_marks.cpp
// Program to calculate total and average marks of a student using a structure.

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Structure to store student information and marks in multiple subjects
struct StudentReport {
    int rollNumber;
    string name;
    double marks[3]; // Marks in 3 subjects
    double total;
    double average;
};

int main() {
    StudentReport student;

    cout << "=== Student Marks Calculation Using Structure ===\n";
    cout << "Enter Roll Number: ";
    if (!(cin >> student.rollNumber)) {
        cout << "Invalid roll number.\n";
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Student Name: ";
    getline(cin, student.name);

    student.total = 0.0;
    cout << "Enter marks for 3 subjects (out of 100):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << (i + 1) << ": ";
        if (!(cin >> student.marks[i]) || student.marks[i] < 0.0 || student.marks[i] > 100.0) {
            cout << "Invalid marks entered. Must be between 0 and 100.\n";
            return 1;
        }
        student.total += student.marks[i];
    }

    // Calculate average
    student.average = student.total / 3.0;

    // Display report
    cout << "\n--- Student Report Card ---\n";
    cout << "Roll Number : " << student.rollNumber << "\n";
    cout << "Name        : " << student.name << "\n";
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << (i + 1) << "   : " << student.marks[i] << "\n";
    }
    cout << fixed << setprecision(2);
    cout << "Total Marks : " << student.total << " / 300\n";
    cout << "Average     : " << student.average << "%\n";

    return 0;
}
