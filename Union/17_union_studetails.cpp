#include <iostream>
using namespace std;

union Student {
    int rollNo;
    float marks;
};

int main() {
    Student s;

    s.rollNo = 25;
    cout << "Roll Number: " << s.rollNo << endl;

    s.marks = 92.5;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
