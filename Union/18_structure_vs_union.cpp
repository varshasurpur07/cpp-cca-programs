// 18_structure_vs_union.cpp
// Program to compare the memory sizes of a structure and a union using sizeof.

#include <iostream>

using namespace std;

// Structure where every member gets its own separate memory address
struct StudentStruct {
    int id;       // typically 4 bytes
    float gpa;    // typically 4 bytes
    char grade;   // typically 1 byte (+ padding bytes for alignment)
};

// Union where all members share the same memory location
union StudentUnion {
    int id;       // typically 4 bytes
    float gpa;    // typically 4 bytes
    char grade;   // typically 1 byte
};

int main() {
    StudentStruct s;
    StudentUnion u;

    cout << "=== Memory Comparison: Structure vs. Union ===\n\n";

    cout << "Individual member sizes:\n";
    cout << "  sizeof(int)   : " << sizeof(int) << " bytes\n";
    cout << "  sizeof(float) : " << sizeof(float) << " bytes\n";
    cout << "  sizeof(char)  : " << sizeof(char) << " bytes\n\n";

    cout << "Total size comparison:\n";
    cout << "  sizeof(StudentStruct) : " << sizeof(StudentStruct) << " bytes\n";
    cout << "    Explanation: Members are stored sequentially (with padding for alignment).\n";
    cout << "                 All members can hold independent values simultaneously.\n\n";

    cout << "  sizeof(StudentUnion)  : " << sizeof(StudentUnion) << " bytes\n";
    cout << "    Explanation: Size equals the largest member (" << sizeof(float) << " bytes).\n";
    cout << "                 All members share the exact same memory space.\n\n";

    cout << "Address Comparison:\n";
    cout << "  Structure member addresses:\n";
    cout << "    &s.id    : " << (void*)&s.id << "\n";
    cout << "    &s.gpa   : " << (void*)&s.gpa << "\n";
    cout << "    &s.grade : " << (void*)&s.grade << " (Distinct addresses)\n\n";

    cout << "  Union member addresses:\n";
    cout << "    &u.id    : " << (void*)&u.id << "\n";
    cout << "    &u.gpa   : " << (void*)&u.gpa << "\n";
    cout << "    &u.grade : " << (void*)&u.grade << " (Identical starting addresses!)\n";

    return 0;
}
