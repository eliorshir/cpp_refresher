#include <iostream>
using namespace std;

const int MAX = 10;

// פונקציה לקבלת ציונים
void inputGrades(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter grade #" << (i + 1) << ": ";
        cin >> arr[i]; // קרא ערך מהמשתמש למערך
    }
}

// פונקציה לחישוב ממוצע
double calcAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // הוסף את הציון הנוכחי
    }
    return static_cast<double>(sum) / size; // חישוב ממוצע
}

// פונקציה למציאת ציון מקסימלי
int findMax(int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) { // בדוק אם הציון הנוכחי גדול מהמקסימום
            maxVal = arr[i]; // עדכן את המקסימום
        }
    }
    return maxVal;
}

int main() {
    int grades[MAX];
    int n;

    cout << "How many grades (max 10): ";
    cin >> n;

    if (n > MAX) {
        cout << "Too many grades! Exiting..." << endl;
        return 0;
    }

    // קלט ציונים
    inputGrades(grades,n); // קריאה לפונקציה inputGrades

    // הדפסת ציונים
    cout << "Grades: ";
    for (int i = 0; i < n; i++) {
        cout << grades[i] << " "; // הדפס כל ציון
    }
    cout << endl;

    // חישוב ממוצע
    double avg = calcAverage(grades,n); // קריאה לפונקציה calcAverage
    cout << "Average = " << avg << endl;

    // מציאת מקסימום
    int maxGrade = findMax(grades,n); // קריאה לפונקציה findMax
    cout << "Max grade = " << maxGrade << endl;

    return 0;
}
