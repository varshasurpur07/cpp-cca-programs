// 20_union_memory_demo.cpp
// Program to demonstrate how union members share memory and how overwriting occurs.

#include <iostream>
#include <iomanip>

using namespace std;

// Union with distinct types sharing the same bytes
union MemoryShare {
    int wholeNumber;
    char text[4];
};

int main() {
    MemoryShare demo;

    cout << "=== Union Memory Sharing Demonstration ===\n";
    cout << "Total union size: " << sizeof(demo) << " bytes\n";
    cout << "Address of demo.wholeNumber : " << (void*)&demo.wholeNumber << "\n";
    cout << "Address of demo.text        : " << (void*)&demo.text << "\n";
    cout << "Both members point to the exact same memory address!\n\n";

    // Step 1: Initialize character array
    demo.text[0] = 'A';
    demo.text[1] = 'B';
    demo.text[2] = 'C';
    demo.text[3] = '\0';

    cout << "Step 1: Assigned text = \"ABC\"\n";
    cout << "  text characters: '" << demo.text[0] << "', '" 
         << demo.text[1] << "', '" << demo.text[2] << "'\n";
    cout << "  ASCII hex values in memory: 0x" 
         << hex << (int)(unsigned char)demo.text[0] << " 0x" 
         << (int)(unsigned char)demo.text[1] << " 0x" 
         << (int)(unsigned char)demo.text[2] << dec << "\n\n";

    // Step 2: Overwrite shared memory with an integer
    demo.wholeNumber = 65; // ASCII 65 is 'A'
    cout << "Step 2: Overwrote with wholeNumber = 65\n";
    cout << "  wholeNumber value : " << demo.wholeNumber << "\n";
    cout << "  Inspecting first byte as char (demo.text[0]): '" << demo.text[0] << "' (ASCII 65 = 'A')\n";
    cout << "  Note: The previous characters ('B', 'C') were overwritten by the bytes of the integer 65.\n\n";

    cout << "Key Takeaway:\n";
    cout << "  In C++, union members overlap in physical memory.\n";
    cout << "  Modifying one member directly alters the byte representation of all other members.\n";
    cout << "  Standard C++ best practice: Only read from the member that was most recently written.\n";

    return 0;
}
