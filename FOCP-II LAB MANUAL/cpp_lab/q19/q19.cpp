#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int low, high;
    cout << "Enter lower limit: ";
    cin >> low;
    cout << "Enter upper limit: ";
    cin >> high;

    cout << "Prime numbers between " << low << " and " << high << ": " << endl;
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
