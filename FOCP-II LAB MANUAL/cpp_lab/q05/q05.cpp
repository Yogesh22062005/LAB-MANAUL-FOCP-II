#include <iostream>
using namespace std;

int main() {
    double a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swap (using temp variable): a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap (using arithmetic): a = " << a << ", b = " << b << endl;

    int ia = (int)a, ib = (int)b;
    ia = ia ^ ib;
    ib = ia ^ ib;
    ia = ia ^ ib;
    cout << "After swap (using XOR): a = " << ia << ", b = " << ib << endl;

    return 0;
}
