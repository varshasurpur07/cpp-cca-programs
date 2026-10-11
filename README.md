# C++ CCA Programs

A complete collection of **20 beginner-friendly C++ programs** covering core computer science fundamentals: **Arrays**, **Enum**, **Structure**, **Pointers**, and **Union**.

This project is organized as a modular repository suitable for college-level Continuous Comprehensive Assessment (CCA) submissions, laboratory practice, and individual execution in Visual Studio Code.

---

## Table of Contents

* [Topics Covered](#topics-covered)
* [Project Structure](#project-structure)
* [List of Programs](#list-of-programs)
  * [A. Arrays](#a-arrays--5-programs)
  * [B. Enum](#b-enum--3-programs)
  * [C. Structure](#c-structure--4-programs)
  * [D. Pointers](#d-pointers--4-programs)
  * [E. Union](#e-union--4-programs)
* [Prerequisites](#prerequisites)
* [Compilation and Execution Guide](#compilation-and-execution-guide)
* [Note on Independent Compilation](#note-on-independent-compilation)

---

## Topics Covered

1. **Arrays**: Fixed-size sequential memory storage, traversal, accumulation, searching, and sorting.
2. **Enum**: User-defined enumeration types, mapped constants, state representation, and type safety.
3. **Structure**: Heterogeneous data records grouping multiple related attributes under a single user-defined type.
4. **Pointers**: Memory addressing, dereferencing, pass-by-pointer parameter passing, and pointer arithmetic.
5. **Union**: Memory-efficient constructs where all members share overlapping memory addresses, illustrated with safe tagged union patterns and memory layout inspection.

---

## Project Structure

```text
cpp-cca-programs/
│
├── Arrays/
│   ├── 01_sum_average.cpp
│   ├── 02_largest_smallest.cpp
│   ├── 03_sort_array.cpp
│   ├── 04_linear_search.cpp
│   └── 05_reverse_array.cpp
│
├── Enum/
│   ├── 06_days_of_week.cpp
│   ├── 07_traffic_signal.cpp
│   └── 08_student_grades.cpp
│
├── Structure/
│   ├── 09_student_details.cpp
│   ├── 10_student_marks.cpp
│   ├── 11_employee_details.cpp
│   └── 12_multiple_students.cpp
│
├── Pointers/
│   ├── 13_pointer_address.cpp
│   ├── 14_swap_numbers.cpp
│   ├── 15_array_sum_pointer.cpp
│   └── 16_string_length.cpp
│
├── Union/
│   ├── 17_union_demo.cpp
│   ├── 18_structure_vs_union.cpp
│   ├── 19_employee_union.cpp
│   └── 20_union_memory_demo.cpp
│
├── .gitignore
└── README.md
```

---

## List of Programs

### A. Arrays — 5 Programs
1. **`Arrays/01_sum_average.cpp`**: Computes the sum and average of $N$ user-input array elements with fixed-point floating precision.
2. **`Arrays/02_largest_smallest.cpp`**: Traverses an array to determine the maximum and minimum values.
3. **`Arrays/03_sort_array.cpp`**: Sorts integer array elements in ascending order using the Bubble Sort algorithm.
4. **`Arrays/04_linear_search.cpp`**: Searches for a target value sequentially and reports its index and position.
5. **`Arrays/05_reverse_array.cpp`**: Reverses the elements of an array in-place using two-pointer index swapping.

### B. Enum — 3 Programs
6. **`Enum/06_days_of_week.cpp`**: Models days of the week (`SUNDAY` through `SATURDAY`), demonstrating integer mapping and day categorization.
7. **`Enum/07_traffic_signal.cpp`**: Simulates a traffic control signal (`RED`, `YELLOW`, `GREEN`) and prints driving instructions.
8. **`Enum/08_student_grades.cpp`**: Maps numerical score ranges to letter grade enumerations (`GRADE_A` through `GRADE_F`).

### C. Structure — 4 Programs
9. **`Structure/09_student_details.cpp`**: Collects and prints student records (Roll Number, Name, Course, Marks) using a `struct`.
10. **`Structure/10_student_marks.cpp`**: Stores multi-subject marks in a structure and calculates overall total and percentage.
11. **`Structure/11_employee_details.cpp`**: Models an employee entity and computes gross/net earnings from basic salary and allowances.
12. **`Structure/12_multiple_students.cpp`**: Implements an array of structures to manage and display multiple student records in a clean tabular view.

### D. Pointers — 4 Programs
13. **`Pointers/13_pointer_address.cpp`**: Inspects memory addresses, pointer referencing (`&`), and value modification via dereferencing (`*`).
14. **`Pointers/14_swap_numbers.cpp`**: Implements a swap utility using pointer parameters (simulating call-by-reference).
15. **`Pointers/15_array_sum_pointer.cpp`**: Traverses array elements and computes their sum using pointer arithmetic.
16. **`Pointers/16_string_length.cpp`**: Calculates the length of a null-terminated C-string (with spaces) by advancing a character pointer.

### E. Union — 4 Programs
17. **`Union/17_union_demo.cpp`**: Demonstrates assigning and reading multiple data types (`int`, `float`, `char`) in a union, highlighting the single active member rule.
18. **`Union/18_structure_vs_union.cpp`**: Compares `sizeof` memory footprints and prints internal member addresses to contrast sequential struct memory with overlapping union memory.
19. **`Union/19_employee_union.cpp`**: Implements a safe **tagged union** pattern where an `enum` dictates whether an employee's compensation is hourly or salaried.
20. **`Union/20_union_memory_demo.cpp`**: Illustrates shared memory overwriting by inspecting raw bytes and character arrays when an overlapping integer is modified.

---

## Prerequisites

To compile and run these programs on your local computer:

1. **C++ Compiler**:
   * **GCC / MinGW-w64** (`g++`) on Windows, macOS, or Linux.
   * Verify installation in your terminal:
     ```bash
     g++ --version
     ```
2. **Visual Studio Code**:
   * Install the official **C/C++** extension from Microsoft (`ms-vscode.cpptools`).
   * (Optional) **Code Runner** extension for one-click compilation.

---

## Compilation and Execution Guide

Every program in this repository is completely self-contained with its own `int main()` function. They must be compiled individually.

### Compiling via VS Code Terminal or Command Prompt / PowerShell

Navigate to the project root directory:
```bash
cd cpp-cca-programs
```

#### Example 1: Arrays
```bash
# Compile
g++ Arrays/01_sum_average.cpp -o sum_average

# Run on Windows
.\sum_average.exe

# Run on Linux / macOS
./sum_average
```

#### Example 2: Enum
```bash
# Compile
g++ Enum/06_days_of_week.cpp -o days_of_week

# Run on Windows
.\days_of_week.exe
```

#### Example 3: Structure
```bash
# Compile
g++ Structure/09_student_details.cpp -o student_details

# Run on Windows
.\student_details.exe
```

#### Example 4: Pointers
```bash
# Compile
g++ Pointers/14_swap_numbers.cpp -o swap_numbers

# Run on Windows
.\swap_numbers.exe
```

#### Example 5: Union
```bash
# Compile
g++ Union/18_structure_vs_union.cpp -o structure_vs_union

# Run on Windows
.\structure_vs_union.exe
```

---

## Note on Independent Compilation

* **Do not compile all `.cpp` files together** in a single `g++ *.cpp` command. Each file contains an entry point (`int main()`), and compiling them together will cause a duplicate symbol / linker error.
* Always compile the specific program file you wish to run.
