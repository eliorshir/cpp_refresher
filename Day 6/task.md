# Day 6 – Pointers and Pass by Reference

## 🎯 Goal
- Understand **pointers** (`*`, `&`) in C++
- Learn how to use pointers for **pass by reference**
- Practice writing functions that manipulate values via pointers

---

## 🧩 Tasks

### ✅ Task 1: Print Value and Address
Create a variable `int x = 10;` and:
- Declare a pointer that points to `x`
- Print:
  - The **value of x**
  - The **address of x**
  - The **value through the pointer**

**Example Output:**
x = 10
Address of x: 0x7ffee3b9c8ac
Value from pointer: 10


### ✅ Task 2: Swap Two Integers
Write a function:
void swap(int* a, int* b);
This function should swap the values of two integers by using pointers.

Example:

Before swap: a=5, b=9
After swap:  a=9, b=5

✅ Task 3: Double a Value
Write a function:

void doubleValue(int* ptr);
This function should multiply the value of an integer by 2 using a pointer.

Example:
Before: x = 10
After:  x = 20


🧠 Questions for Review
1. What is the difference between *p and &x?

2. What happens if you try to dereference nullptr?

3. How can you combine const with pointers to make data or the pointer itself immutable?

