// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    
    cout << "Enter the elements of the 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    cout << "\nThe 3x3 matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}