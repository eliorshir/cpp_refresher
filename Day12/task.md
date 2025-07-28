📅 Day 12 – Dynamic 2D Arrays, Copy Constructor, and Assignment Operator
🎯 Goals
Understand and implement dynamic 2D arrays in C++

Practice building a class that manages dynamic 2D memory

Implement proper constructor, destructor, copy constructor, and assignment operator

Learn the use of this pointer in context

🧠 Theory You Should Know
How to dynamically allocate 2D arrays using new and delete

Rule of Three (Constructor, Copy Constructor, Assignment Operator)

Why shallow copy is dangerous with dynamic memory

Role of this pointer for disambiguation and chaining

💻 Task
Complete the following skeleton code by implementing the missing parts:


#include <iostream>
using namespace std;

class Matrix {
private:
    int** data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) {
        // Allocate 2D array
    }

    ~Matrix() {
        // Free the memory
    }

    Matrix(const Matrix& other) {
        // Copy constructor
    }

    Matrix& operator=(const Matrix& other) {
        // Assignment operator
    }

    void set(int row, int col, int value) {
        // Set value at [row][col]
    }

    int get(int row, int col) const {
        // Get value at [row][col]
    }

    void print() const {
        // Print matrix values
    }
};

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    Matrix m1(r, c);
    // Set values
    // Print m1
    // Copy m1 to m2
    // Change m2 and show m1 remains unchanged
    return 0;
}
🧪 Advanced Tests
Try copying a matrix and changing values — confirm independence.

Check for memory leaks using Valgrind or tools like Dr. Memory.

Assign a matrix to itself (m1 = m1) and verify it behaves correctly.

