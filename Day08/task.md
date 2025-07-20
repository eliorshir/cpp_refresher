# יום 8 – מחלקות (Classes) ואובייקטים (Objects)

## 🎯 מטרות
- להבין מה זה class (מחלקה) ואובייקט
- להגדיר משתנים (fields) ופונקציות (methods) בתוך מחלקה
- להבין מה זה `public` ו־`private`
- ליצור אובייקט של המחלקה ולהשתמש בו

---

## 🧠 הסבר קצר
**class** הוא כמו תבנית (blueprint) ליצירת אובייקטים.  
לדוגמה, אם נגדיר מחלקה `Student` עם שם וציונים, כל תלמיד יהיה "אובייקט" שנבנה על פי התבנית הזו.

**תחביר כללי:**
```cpp
class Student {
private:
    string name;
    int grade;

public:
    void setName(string n) { name = n; }
    string getName() { return name; }
};
🧩 משימה – מחלקת Student
שלב 1: יצירת המחלקה
צור מחלקה Student שתכיל:

שם (string name)

ציון (int grade)

פונקציות:

setName(string n)

getName()

setGrade(int g)

getGrade()

שלד קוד:


class Student {
private:
    _____ name;
    _____ grade;

public:
    void setName(_____) { _____; }
    _____ getName() { return _____; }

    void setGrade(_____) { _____; }
    _____ getGrade() { return _____; }
};
שלב 2: שימוש במחלקה
ב־main:

צור אובייקט מסוג Student

קבל מהמשתמש שם וציון

הדפס את הנתונים

שלד קוד:


int main() {
    Student s;

    cout << "Enter student name: ";
    string name;
    cin >> name;
    s._____; // setName

    cout << "Enter grade: ";
    int g;
    cin >> g;
    s._____; // setGrade

    cout << "Student: " << _____ << ", Grade: " << _____ << endl;

    return 0;
}
🧠 שאלות למחשבה
מה ההבדל בין public ל־private במחלקה?

למה כדאי להשתמש ב־getters ו־setters במקום לגשת ישירות למשתנים?

איך תוסיף פונקציה printDetails() שמדפיסה את שם התלמיד והציון?