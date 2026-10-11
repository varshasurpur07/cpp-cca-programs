// 17_union_demo.cpp
// Program to demonstrate how a union stores different data types one at a time.

#include <iostream>
#include <iomanip>

using namespace std;

// Union definition: all members share the exact same memory location
union DataHolder {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    DataHolder data;

    cout << "=== Union Demonstration: Storing Different Data Types ===\n";
    cout << "Size of DataHolder union: " << sizeof(data) << " bytes\n";
    cout << "(Equal to the size of its largest member, typically 4 bytes for float/int)\n\n";

    // 1. Store integer
    data.intVal = 42;
    cout << "1. Assigning data.intVal = 42:\n";
    cout << "   Current active member (intVal) : " << data.intVal << "\n\n";

    // 2. Store float (overwrites the shared memory occupied by intVal)
    data.floatVal = 3.14159f;
    cout << "2. Assigning data.floatVal = 3.14159f:\n";
    cout << "   Current active member (floatVal): " << fixed << setprecision(4) << data.floatVal << "\n";
    cout << "   Note: Because memory is shared, previously stored intVal is now overwritten.\n\n";

    // 3. Store char (overwrites the first byte of shared memory)
    data.charVal = 'Z';
    cout << "3. Assigning data.charVal = 'Z':\n";
    cout << "   Current active member (charVal) : " << data.charVal << "\n";
    cout << "   Note: In a union, only the most recently assigned member holds a valid, meaningful value.\n";

    return 0;
}
