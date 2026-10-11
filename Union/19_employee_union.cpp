// 19_employee_union.cpp
// Program to store and display employee-related compensation information using a tagged union pattern.

#include <iostream>
#include <iomanip>

using namespace std;

// Union to store either an hourly wage or a fixed monthly salary (mutually exclusive)
union Compensation {
    double hourlyRate;
    double monthlySalary;
};

// Enum tag to track which union member is active
enum CompensationType {
    HOURLY = 1,
    SALARIED = 2
};

// Safe wrapper structure combining tag and union
struct EmployeeRecord {
    int id;
    CompensationType compType;
    Compensation comp;
};

int main() {
    EmployeeRecord emp;

    cout << "=== Employee Compensation Using Union ===\n";
    cout << "Enter Employee ID: ";
    if (!(cin >> emp.id)) {
        cout << "Invalid Employee ID.\n";
        return 1;
    }

    cout << "\nSelect Compensation Model:\n";
    cout << "1. Hourly Wage\n";
    cout << "2. Monthly Fixed Salary\n";
    cout << "Enter choice (1 or 2): ";

    int choice;
    if (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cout << "Invalid choice.\n";
        return 1;
    }

    emp.compType = static_cast<CompensationType>(choice);

    if (emp.compType == HOURLY) {
        cout << "Enter hourly rate ($/hr): ";
        cin >> emp.comp.hourlyRate;
    } else {
        cout << "Enter monthly salary ($/month): ";
        cin >> emp.comp.monthlySalary;
    }

    // Display information reading ONLY the active union member
    cout << "\n--- Employee Record ---\n";
    cout << "Employee ID       : " << emp.id << "\n";
    cout << fixed << setprecision(2);
    if (emp.compType == HOURLY) {
        cout << "Compensation Type : Hourly Contractor\n";
        cout << "Rate              : $" << emp.comp.hourlyRate << " per hour\n";
    } else {
        cout << "Compensation Type : Salaried Full-Time\n";
        cout << "Salary            : $" << emp.comp.monthlySalary << " per month\n";
    }
    cout << "Note: By pairing union with an enum tag, we safely access only the active member.\n";

    return 0;
}
