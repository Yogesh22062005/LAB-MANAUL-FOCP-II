#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3];

    cout << "Enter elements of Matrix A (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter elements of Matrix B (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    cout << "\nSum Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
