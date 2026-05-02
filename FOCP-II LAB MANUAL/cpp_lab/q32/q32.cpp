#include <iostream>
using namespace std;

int main() {
    double arr[5];
    cout << "Enter 5 stock values: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    double first = -1e9, second = -1e9;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Largest        = " << first << endl;
    cout << "Second Largest = " << second << endl;
    return 0;
}
