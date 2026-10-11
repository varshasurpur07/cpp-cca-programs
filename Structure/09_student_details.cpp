// 09_student_details.cpp
// Program to store and display student details using a structure.

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// Definition of Student structure
struct Student {
    int rollNumber;
    string name;
    string course;
    double marks;
};

int main() {
    Student s;

    cout << "=== Student Details Using Structure ===\n";
    cout << "Enter Roll Number: ";
    if (!(cin >> s.rollNumber)) {
        cout << "Invalid roll number input.\n";
        return 1;
    }

    // Clear input buffer before reading string with spaces
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Course: ";
    getline(cin, s.course);

    cout << "Enter Marks: ";
    if (!(cin >> s.marks)) {
        cout << "Invalid marks input.\n";
        return 1;
    }

    // Displaying the details
    cout << "\n--- Student Record ---\n";
    cout << "Roll Number : " << s.rollNumber << "\n";
    cout << "Name        : " << s.name << "\n";
    cout << "Course      : " << s.course << "\n";
    cout << "Marks       : " << s.marks << "\n";

    return 0;
}
