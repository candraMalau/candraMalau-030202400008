// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];
    int matrix2[4][4];
    int sum[4][4];
    
    cout << "Enter the elements of the 4x4 matrix: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "Enter the elements of the 4x4 matrix2: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    cout << "\nThe 4x4 matrix is: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nThe 4x4 matrix2 is: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }

    cout << "\nThe sum of the two matrices is: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}