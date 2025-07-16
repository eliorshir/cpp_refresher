#include <iostream>
using namespace std;


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void doubleValue(int* ptr) {
    *ptr *= 2;
}

int main() {
    int x = 10;

    int* p = &x;

    cout << "x = " << x << endl;

    cout << "Address of x: " << p << endl;

    cout << "Value from pointer: " << *p << endl;
//swap.
    int a = 5, b = 9;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(&a,&b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    cout << "Before: " << a << endl;

    // קריאה לפונקציה עם כתובת של num
    doubleValue(&a);

    cout << "After: " << a << endl;
    return 0;
}