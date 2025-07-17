# Day 7 – Review Project: Student Grades Management

## 🎯 Goal
- Combine everything learned so far: **variables, arrays, loops, functions, pointers**
- Work with **input/output**, simple calculations, and structured code
- Simulate a **basic student grade management system**

---

## 🧩 Tasks

### ✅ Task 1: Collect Student Data
- Ask the user how many students (up to 50).
- Create an array to store their grades.
- Read the grades from the user.

**Example:**
Enter number of students: 5
Enter grade for student 1: 90
Enter grade for student 2: 80
...


### ✅ Task 2: Calculate Statistics
Write functions to:
- Calculate **average grade**
- Find the **highest grade**
- Find the **lowest grade**

Use the following signatures:
```cpp
double calculateAverage(int grades[], int size);
int findMax(int grades[], int size);
int findMin(int grades[], int size);
✅ Task 3: Print Results
After calculations, print:

Average grade: 84
Highest grade: 95
Lowest grade: 60
✅ Task 4 (Optional Challenge):
Allow the user to search for a specific grade and print the position (index).

Sort the grades in ascending order (use std::sort or write your own).

🧠 Questions for Review
Why is it better to use functions instead of writing all logic in main()?

How does passing an array to a function work in C++?

What happens if you try to access grades[size]?