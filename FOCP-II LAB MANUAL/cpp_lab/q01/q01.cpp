#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double average = (a + b + c) / 3.0;
    cout << "Average = " << average << endl;
    return 0;
}
