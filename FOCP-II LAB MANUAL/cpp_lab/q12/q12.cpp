#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (b + c <= a) || (a + c <= b)) {
        cout << "Invalid triangle." << endl;
    } else if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }
    return 0;
}
