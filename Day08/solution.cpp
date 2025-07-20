#include <iostream>
using namespace std;

class Student {
private:    
    string name;
    int grade; 

public:
    
    void setName(string nme) { 
        name = nme;
    }
    
    string getName() { 
        return name; 
    }

    void setGrade(int grd) { 
        grade = grd; 
    }

    int getGrade() { 
        return grade; 
    }
};

int main() {
    Student s; 

    cout << "Enter student name: ";
    string name;
    cin >> name;
    s.setName(name); 

    cout << "Enter grade: ";
    int g;
    cin >> g;
    s.setGrade(g); 

    cout << "Student: " << s.getName() << ", Grade: " << s.getGrade() << endl;

    return 0;
}