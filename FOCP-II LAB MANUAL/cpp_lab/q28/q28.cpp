#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) evenSum += arr[i];
        else oddSum += arr[i];
    }

    cout << "Sum of Even numbers = " << evenSum << endl;
    cout << "Sum of Odd numbers  = " << oddSum << endl;
    return 0;
}
