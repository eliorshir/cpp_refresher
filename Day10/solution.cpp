#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    Student(string n = "Unknown", int g = 0) {
        name = n; // Initialize name
        grade = g; // Initialize grade
    }

    string getName() { return name; }
    int getGrade() { return grade; }

    void setName(string n) { name = n; }
    void setGrade(int g) { grade = g; }

    ~Student() {
        cout << "Student " << name << " destroyed" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation
    Student* students = new Student[n]; // Allocate array of Student objects

    for (int i = 0; i < n; i++) {
        string name;
        int grade;
        cout << "Enter name and grade for student " << i + 1 << ": ";
        cin >> name >> grade;

        students[i].setName(name); // setName
        students[i].setGrade(grade); // setGrade
    }

    cout << "\nStudents list:\n";
    for (int i = 0; i < n; i++) {
        cout << students[i].getName()
             << " - " << students[i].getGrade() << endl;
    }

    // Free memory
    delete[] students;

    return 0;
}
