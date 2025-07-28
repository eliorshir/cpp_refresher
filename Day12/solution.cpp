#include <iostream>
using namespace std;

class Matrix
{
private:
    int rows, cols;
    int **data;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
        data = new int *[rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
            {
                data[i][j] = 0; // Initialize matrix elements to 0
            }
        }
    }

    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i]; // Free each row
        }
        delete[] data; // Free the array of pointers
        cout << "Matrix destroyed." << endl;
    }

    Matrix(const Matrix &other)
    {
        rows = other.rows;
        cols = other.cols;
        data = new int *[rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
            {
                data[i][j] = other.data[i][j]; // Copy each element
            }
        }
    }

    Matrix &operator=(const Matrix &other)
    {
        if (this == &other)
            return *this;

        for (int i = 0; i < rows; ++i)
        {
            delete[] data[i];
        }
        delete[] data;

        rows = other.rows;
        cols = other.cols;
        data = new int *[rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
            {
                data[i][j] = other.data[i][j]; // Copy each element
            }
        }
        cout << "Matrix copied." << endl;
        return *this;
    }

    void setValue(int r, int c, int val)
    {
        if (r >= 0 && r < rows && c >= 0 && c < cols)
        {
            data[r][c] = val;
        }
        else
        {
            cout << "Invalid index!" << endl;
        }
    }

    void print()
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(2, 3);
    m1.setValue(0, 0, 1);
    m1.setValue(0, 1, 2);
    m1.setValue(0, 2, 3);
    m1.setValue(1, 0, 4);
    m1.setValue(1, 1, 5);
    m1.setValue(1, 2, 6);

    cout << "Original matrix:" << endl;
    m1.print();

    // בדיקת copy constructor
    Matrix m2 = m1;
    cout << "Copied matrix (copy constructor):" << endl;
    m2.print();

    // שינוי ב־m2
    m2.setValue(0, 0, 100);
    cout << "After modifying copy:" << endl;
    cout << "Original:" << endl;
    m1.print();
    cout << "Copy:" << endl;
    m2.print();

    // בדיקת השמה
    Matrix m3(2, 3);
    m3 = m1;
    cout << "Assigned matrix (operator=):" << endl;
    m3.print();

    return 0;
}