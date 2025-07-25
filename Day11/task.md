Day 11: Rule of Three – Copy Constructor, Destructor, and Assignment Operator
🎯 Objective
Implement the Rule of Three in C++ for a class that uses dynamic memory. Specifically, work with a dynamicGrades class that stores a dynamically allocated array of grades for a student.

📂 Files:
Create a single file named: day11_dynamicGrades.cpp

📌 Tasks:
Complete the missing parts marked with // TODO in the code below:

cpp
Copy
Edit
#include <iostream>
using namespace std;

class dynamicGrades
{
private:
    string name;
    int *grades; // Pointer to dynamically allocated array
    int size;

public:
    // Constructor
    dynamicGrades(string n, int s)
    {
        name = n;
        size = s;
        grades = new int[size];

        for (int i = 0; i < size; i++)
        {
            grades[i] = 0; // Initialize grades to 0
        }
    }

    // Destructor
    ~dynamicGrades()
    {
        // TODO: Free dynamically allocated memory
        // Print: "Grades for <name> destroyed."
    }

    // Copy constructor
    dynamicGrades(const dynamicGrades &other)
    {
        // TODO:
        // 1. Copy name and size
        // 2. Allocate new memory for grades
        // 3. Copy all grades
        // Print: "Copying grades for <name>"
    }

    // Assignment operator
    dynamicGrades &operator=(const dynamicGrades &other)
    {
        // TODO:
        // 1. Handle self-assignment
        // 2. Free old memory
        // 3. Copy name, size, and grades
        return *this;
    }

    void setGrades(int index, int g)
    {
        grades[index] = g; // Set grade at index
    }

    void printGrades()
    {
        cout << "Grades for student " << name << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Grade " << (i + 1) << " is " << grades[i] << " ." << endl;
        }
    }
};

int main()
{
    int numOfGrades;
    cout << "Enter number of grades:";
    cin >> numOfGrades;

    dynamicGrades student("Alice", numOfGrades);
    cout << "Enter grades for " << numOfGrades << " subjects:" << endl;
    for (int i = 0; i < numOfGrades; i++)
    {
        int grade;
        cout << "enter grade " << (i + 1) << ": ";
        cin >> grade;
        student.setGrades(i, grade);
    }

    student.printGrades();

    dynamicGrades studentCopy = student; // Copy constructor will be called
    studentCopy.printGrades();

    studentCopy.setGrades(0, 100);
    cout << "After modifying the copy:" << endl;
    student.printGrades();
    studentCopy.printGrades();

    return 0;
}
✅ Requirements:
 Implement a deep copy in the copy constructor and assignment operator.

 Make sure no memory leaks occur (call delete[] in destructor).

 Make sure copy does not affect original object.

 Self-assignment should not break the program.

🔍 Questions to Answer (write in comments or separate file):
What is the difference between shallow and deep copy?

Why do we need to implement the copy constructor and assignment operator manually?

What happens if we don’t implement a destructor when using new[]?