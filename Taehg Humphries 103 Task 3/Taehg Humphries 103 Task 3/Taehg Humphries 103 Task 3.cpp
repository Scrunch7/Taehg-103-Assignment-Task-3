#include <iostream>

using namespace std;

//void Multiply() {
//    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
//
//    cout << "Enter rows and columns for first matrix: ";
//    cin >> r1 >> c1;
//    cout << "Enter rows and columns for second matrix: ";
//    cin >> r2 >> c2;
//
//    // If column of first matrix in not equal to row of second matrix,
//    // ask the user to enter the size of matrix again.
//    while (c1 != r2)
//    {
//        cout << "Error! column of first matrix not equal to row of second.";
//
//        cout << "Enter rows and columns for first matrix: ";
//        cin >> r1 >> c1;
//
//        cout << "Enter rows and columns for second matrix: ";
//        cin >> r2 >> c2;
//    }
//
//    // Storing elements of first matrix.
//    cout << "\n" << "Enter elements of matrix 1:" << endl;
//    for (i = 0; i < r1; ++i)
//        for (j = 0; j < c1; ++j)
//        {
//            cout << "Enter element a" << i + 1 << j + 1 << " : ";
//            cin >> a[i][j];
//        }
//
//    // Storing elements of second matrix.
//    cout << "\n" << "Enter elements of matrix 2:" << endl;
//    for (i = 0; i < r2; ++i)
//        for (j = 0; j < c2; ++j)
//        {
//            cout << "Enter element b" << i + 1 << j + 1 << " : ";
//            cin >> b[i][j];
//        }
//
//    // Initializing elements of matrix as 0.
//    for (i = 0; i < r1; ++i)
//        for (j = 0; j < c2; ++j)
//        {
//            mult[i][j] = 0;
//        }
//
//    // Multiplying matrix a and b and storing in array mult.
//    for (i = 0; i < r1; ++i)
//        for (j = 0; j < c2; ++j)
//            for (k = 0; k < c1; ++k)
//            {
//                mult[i][j] += a[i][k] * b[k][j];
//            }
//
//    // Displaying the multiplication of two matrix.
//    cout << endl << "Output Matrix: " << endl;
//    for (i = 0; i < r1; ++i)
//        for (j = 0; j < c2; ++j)
//        {
//            cout << " " << mult[i][j];
//            if (j == c2 - 1)
//                cout << endl;
//        }
//}





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

    

    //// Initializing elements of matrix as 0.
    //for (i = 0; i < row; ++i) {
    //    for (j = 0; j < column; ++j)
    //    {
    //        c[i][j] = 0;
    //    }
    //}

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

