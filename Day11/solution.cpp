#include <iostream>
using namespace std;

class dynamicGrades
{
private:
    string name;
    int *grades; // Pointer to dynamically allocated array
    int size;

public:
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

    ~dynamicGrades()
    {
        delete[] grades; // Free dynamically allocated memory
        cout << "Grades for " << name << " destroyed." << endl;
    }

    dynamicGrades(const dynamicGrades &other)
    { // Copy constructor
        cout << "Copying grades for " << other.name << endl;
        name = other.name;
        size = other.size;
        grades = new int[size];
        for (int i = 0; i < size; i++)
        {
            grades[i] = other.grades[i];
        }
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

    dynamicGrades &operator=(const dynamicGrades &other)
    {
        if (this == &other)
            return *this; // Handle self-assignment

        delete[] grades; // Free old memory

        name = other.name;
        size = other.size;
        grades = new int[size];
        for (int i = 0; i < size; i++)
        {
            grades[i] = other.grades[i];
        }

        return *this;
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
    studentCopy.printGrades();           // Print copied grades

    studentCopy.setGrades(0, 100); // Change a grade in the copy
    cout << "After modifying the copy:" << endl;
    student.printGrades();     // Original grades remain unchanged
    studentCopy.printGrades(); // Copied grades reflect the change
    return 0;
}