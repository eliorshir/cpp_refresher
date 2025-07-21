#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grades[3];

public:
    Student() {
        name = "Unknown"; 
        for (int i = 0; i < 3; i++) {
            grades[i] = 0; 
        }
    }

    
    Student(string n, int g1, int g2, int g3) {
        name = n;
        grades[0] = g1;
        grades[1] = g2;
        grades[2] = g3;
    }

    void setName(string n) { name = n; }
    string getName() { return name; }

    
    double getAverage() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += grades[i]; 
        }
        return static_cast<double>(sum/3); 
    }

   
    int getMaxGrade() {
        int maxVal = grades[0];
        for (int i = 1; i < 3; i++) {
            if (maxVal < grades[i]) { 
                maxVal = grades[i];
            }
        }
        return maxVal;
    }
};

int main() {
    // אובייקט עם בנאי ריק
    Student s1;
    s1.setName("David");

    // אובייקט עם בנאי עם פרמטרים
    Student s2("Alice", 90, 85, 92);

    cout << "Student " << s2.getName() 
         << " has avg " << s2.getAverage() 
         << " and max grade " << s2.getMaxGrade() << endl;

    return 0;
}
