// 11_employee_details.cpp
// Program to store and display employee details using a structure.

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Structure representing an Employee
struct Employee {
    int id;
    string name;
    string department;
    double basicSalary;
    double allowances;
    double netSalary;
};

int main() {
    Employee emp;

    cout << "=== Employee Details Using Structure ===\n";
    cout << "Enter Employee ID: ";
    if (!(cin >> emp.id)) {
        cout << "Invalid Employee ID.\n";
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);

    cout << "Enter Department: ";
    getline(cin, emp.department);

    cout << "Enter Basic Salary: ";
    if (!(cin >> emp.basicSalary) || emp.basicSalary < 0) {
        cout << "Invalid Basic Salary.\n";
        return 1;
    }

    cout << "Enter Allowances: ";
    if (!(cin >> emp.allowances) || emp.allowances < 0) {
        cout << "Invalid Allowances.\n";
        return 1;
    }

    // Calculate net salary
    emp.netSalary = emp.basicSalary + emp.allowances;

    // Display employee slip
    cout << "\n--- Employee Pay Details ---\n";
    cout << "ID          : " << emp.id << "\n";
    cout << "Name        : " << emp.name << "\n";
    cout << "Department  : " << emp.department << "\n";
    cout << fixed << setprecision(2);
    cout << "Basic Salary: $" << emp.basicSalary << "\n";
    cout << "Allowances  : $" << emp.allowances << "\n";
    cout << "Net Salary  : $" << emp.netSalary << "\n";

    return 0;
}
