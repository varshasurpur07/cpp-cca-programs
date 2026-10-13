#include <iostream>
using namespace std;

union Data {
    char grade;
};

int main() {
    Data d;

    d.grade = 'A';

    cout << "Grade: " << d.grade;

    return 0;
}
