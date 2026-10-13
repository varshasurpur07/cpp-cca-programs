#include <iostream>
using namespace std;

union Data {
    int number;
    char letter;
};

int main() {
    Data d;

    d.number = 100;
    cout << "Number: " << d.number << endl;

    d.letter = 'B';
    cout << "Letter: " << d.letter << endl;

    return 0;
}
