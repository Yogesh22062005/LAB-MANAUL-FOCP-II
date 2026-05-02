#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 2) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is not a Prime number." << endl;
    }
    return 0;
}
