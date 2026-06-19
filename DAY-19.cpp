//1:- Write a program to Add matrices
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], sum[rows][cols];

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Adding the matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant Sum Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//2:- Write a program to Subtract matrices
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], diff[rows][cols];

    cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Subtracting the matrices (A - B)
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Resultant Difference Matrix (A - B):\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//3:- Write a program to Transpose matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Computing Transpose
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix:\n";
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
//4:- Write a program to Find diagonal sum
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (N x N): ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for(int i = 0; i < n; i++) {
        primarySum += matrix[i][i];         // Primary diagonal (i == j)
        secondarySum += matrix[i][n - 1 - i]; // Secondary diagonal
    }

    cout << "Sum of Primary Diagonal: " << primarySum << endl;
    cout << "Sum of Secondary Diagonal: " << secondarySum << endl;

    return 0;
}