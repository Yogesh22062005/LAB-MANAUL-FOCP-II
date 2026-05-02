#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sumDivisors = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sumDivisors += i;
        }
    }

    if (sumDivisors == n) {
        cout << n << " is a Perfect Number." << endl;
    } else {
        cout << n << " is not a Perfect Number." << endl;
    }

    int digits = 0, temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    int armSum = 0;
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        armSum += pow(d, digits);
        temp /= 10;
    }

    if (armSum == n) {
        cout << n << " is an Armstrong Number." << endl;
    } else {
        cout << n << " is not an Armstrong Number." << endl;
    }

    return 0;
}
