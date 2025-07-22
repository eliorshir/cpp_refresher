# Day 10 – Dynamic Memory Allocation & Destructor

## 🎯 Goals
- Understand **dynamic memory** using `new` and `delete`
- Learn about **Destructor** and when it is called
- Manage a dynamic array of objects
- Prepare for the **Rule of Three** (constructor, copy constructor, destructor)

---

## 🧠 Quick Explanation

### **Dynamic Memory**
In C++, memory can be allocated at runtime:
```cpp
int* p = new int;       // Allocate a single int
int* arr = new int[10]; // Allocate an array of 10 ints
To free memory:


delete p;       // Free a single element
delete[] arr;   // Free an array
Destructor
A destructor is a special function (with a ~ prefix) called automatically when an object is destroyed:


class Student {
public:
    ~Student() {
        cout << "Student destroyed" << endl;
    }
};
This is crucial when your class manages memory (e.g., using new).

🧩 Task – Dynamic Student List
Create a program that:

Defines a Student class with:

string name

int grade

A constructor that accepts name and grade (with default values).

A destructor that prints:
Student <name> destroyed

In main, ask the user for n (the number of students), dynamically allocate an array of Student objects (new Student[n]).

For each student, read name and grade from the user and initialize the object.

Print the list of all students.

Free the memory using delete[].

Code Skeleton (Fill the Blanks)

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    Student(string n = "Unknown", int g = 0) {
        _____; // Initialize name
        _____; // Initialize grade
    }

    string getName() { return name; }
    int getGrade() { return grade; }

    void setName(string n) { name = n; }
    void setGrade(int g) { grade = g; }

    ~Student() {
        cout << "Student " << _____ << " destroyed" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation
    Student* students = _____; // new Student[n];

    for (int i = 0; i < n; i++) {
        string name;
        int grade;
        cout << "Enter name and grade for student " << i + 1 << ": ";
        cin >> name >> grade;

        students[i]._____; // setName
        students[i]._____; // setGrade
    }

    cout << "\nStudents list:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].getName()
             << " - " << students[i].getGrade() << endl;
    }

    // Free memory
    _____; // delete[] students;

    return 0;
}
🧠 Questions to Think About
What happens if you forget to call delete[] after new?

What is the difference between delete and delete[]?

Why do we need a destructor when a class uses dynamic memory?

🏆 Advanced Challenge
Implement a function Student* createClass(int n) that returns a pointer to a dynamically allocated array of students.

Implement printTopStudent(Student* arr, int n) that prints the student with the highest grade.