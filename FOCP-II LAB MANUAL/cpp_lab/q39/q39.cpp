#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    long long triangle[20][20] = {};

    for (int i = 0; i < rows; i++) {
        triangle[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    cout << "\nPascal's Triangle:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int sp = 0; sp < rows - i - 1; sp++) cout << " ";
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
