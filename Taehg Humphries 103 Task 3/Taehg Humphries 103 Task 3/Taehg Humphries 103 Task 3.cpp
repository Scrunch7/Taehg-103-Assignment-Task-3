#include <iostream>

using namespace std;


void Addition() {
    int row, column, a[10][10], b[10][10], c[10][10], sum[10][10], i, j, k, k1;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> row;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> column;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Adding Two matrices
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
            c[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
        {
            cout << c[i][j] << "  ";
            if (j == column - 1)
                cout << endl;
        }

    // Multiplying matrix a and b and storing in array mult.

    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
            for (k = 0; k < column; ++k)
            {
                sum[i][j] = (c[i][j] * 3);
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j)
        {
            cout << " " << sum[i][j];
            if (j == column - 1)
                cout << endl;
        }
}

int main()
{
    
    //Multiply();
    Addition();

}

