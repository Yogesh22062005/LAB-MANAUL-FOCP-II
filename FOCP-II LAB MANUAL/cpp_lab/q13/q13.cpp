#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        double r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real roots: r1 = " << r1 << ", r2 = " << r2 << endl;
    } else if (discriminant == 0) {
        double r = -b / (2 * a);
        cout << "One real root: r = " << r << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex roots:" << endl;
        cout << "r1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "r2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;
}
