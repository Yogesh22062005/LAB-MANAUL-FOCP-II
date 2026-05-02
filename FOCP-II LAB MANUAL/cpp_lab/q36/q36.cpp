#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter order of Matrix A (m x n): ";
    cin >> m >> n;
    cout << "Enter order of Matrix B (p x q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible. Columns of A must equal rows of B." << endl;
        return 0;
    }

    int a[10][10], b[10][10], result[10][10] = {};

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                result[i][j] += a[i][k] * b[k][j];

    cout << "\nResult Matrix (" << m << " x " << q << "):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}
