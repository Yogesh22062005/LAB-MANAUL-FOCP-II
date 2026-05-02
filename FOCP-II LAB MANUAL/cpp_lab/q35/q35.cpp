#include <iostream>
using namespace std;

int main() {
    int mat[3][3];

    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> mat[i][j];

    cout << "\nOriginal Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }

    cout << "\nTranspose Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << mat[j][i] << " ";
        cout << endl;
    }
    return 0;
}
