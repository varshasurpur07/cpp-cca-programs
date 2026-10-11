// 08_student_grades.cpp
// Program to determine and display student grades using an enum.

#include <iostream>
#include <string>

using namespace std;

// Enumeration representing academic grades
enum Grade {
    GRADE_A,
    GRADE_B,
    GRADE_C,
    GRADE_D,
    GRADE_F
};

// Function to map marks to Grade enum
Grade calculateGrade(double marks) {
    if (marks >= 85.0) return GRADE_A;
    if (marks >= 70.0) return GRADE_B;
    if (marks >= 55.0) return GRADE_C;
    if (marks >= 40.0) return GRADE_D;
    return GRADE_F;
}

// Function to display the grade description
void printGradeInfo(Grade grade) {
    switch (grade) {
        case GRADE_A:
            cout << "Grade: A (Excellent performance)\n";
            break;
        case GRADE_B:
            cout << "Grade: B (Good performance)\n";
            break;
        case GRADE_C:
            cout << "Grade: C (Satisfactory performance)\n";
            break;
        case GRADE_D:
            cout << "Grade: D (Pass)\n";
            break;
        case GRADE_F:
            cout << "Grade: F (Fail - Needs improvement)\n";
            break;
    }
}

int main() {
    cout << "=== Student Grade Evaluation Using Enum ===\n";
    cout << "Enter student marks (0 to 100): ";

    double marks;
    if (!(cin >> marks) || marks < 0.0 || marks > 100.0) {
        cout << "Invalid marks. Please enter a value between 0 and 100.\n";
        return 1;
    }

    Grade grade = calculateGrade(marks);
    cout << "\nEvaluation Summary:\n";
    cout << "Marks entered: " << marks << "/100\n";
    printGradeInfo(grade);

    return 0;
}
