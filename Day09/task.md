# יום 9 – Constructors ו־Overloading

## 🎯 מטרות
- להבין מה זה **Constructor** (בנאי) ואיך הוא מופעל אוטומטית בעת יצירת אובייקט.
- ללמוד **Overloading** – איך להגדיר כמה גרסאות של פונקציות או בנאים.
- ליישם מחלקת `Student` מורחבת עם ממוצע ציונים וציון מקסימלי.

---

## 🧠 הסבר קצר
### מה זה Constructor?
Constructor הוא פונקציה מיוחדת הנושאת את שם המחלקה, שמופעלת בעת יצירת אובייקט.

דוגמה:
```cpp
class Student {
public:
    Student() {
        cout << "Student created!" << endl;
    }
};
בעת יצירת Student s; יודפס Student created!.

Constructor עם פרמטרים:


Student(string n, int g) {
    name = n;
    grade = g;
}
מה זה Overloading?
אפשר להגדיר כמה פונקציות עם אותו שם, אך פרמטרים שונים:

cpp
Copy
Edit
void print(int x);
void print(string s);
הקומפיילר יבחר את הגרסה הנכונה לפי סוג המשתנים.

🧩 משימה – Student משודרגת
צור מחלקה Student עם:

שם (string name)

מערך של 3 ציונים (int grades[3])

בנאי ריק (default constructor) שמאתחל את השדות

בנאי עם פרמטרים: Student(string n, int g1, int g2, int g3)

פונקציה getAverage() שמחזירה ממוצע ציונים

פונקציה getMaxGrade() שמחזירה את הציון הגבוה ביותר

שלד קוד – להשלים את החסר

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int grades[3];

public:
    // בנאי ריק
    Student() {
        _____ = "Unknown";
        for (int i = 0; i < 3; i++) {
            _____;
        }
    }

    // בנאי עם פרמטרים
    Student(_____) {
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
            sum += _____;
        }
        return _____; // המרה ל-double
    }

    int getMaxGrade() {
        int maxVal = grades[0];
        for (int i = 1; i < 3; i++) {
            if (_____) {
                maxVal = grades[i];
            }
        }
        return maxVal;
    }
};

int main() {
    Student s1; // אובייקט עם בנאי ריק
    s1.setName("David");

    Student s2("Alice", 90, 85, 92); // אובייקט עם בנאי פרמטרים

    cout << "Student " << s2.getName() 
         << " has avg " << s2.getAverage() 
         << " and max grade " << s2.getMaxGrade() << endl;

    return 0;
}
🧠 שאלות למחשבה
מה היתרון של שימוש ב־constructor עם פרמטרים?

איך היית מוסיף overloading ל־constructor שיקבל רק שם וימלא ציונים ב־0?

מה קורה אם לא תגדיר constructor בכלל – מה עושה ה־default constructor?