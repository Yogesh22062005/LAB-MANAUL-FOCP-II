#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter count of numbers: ";
    cin >> n;

    double num, largest;
    cout << "Enter number 1: ";
    cin >> largest;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > largest) {
            largest = num;
        }
    }

    cout << "Largest number = " << largest << endl;
    return 0;
}
