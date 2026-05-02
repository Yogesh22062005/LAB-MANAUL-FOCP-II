#include <iostream>
using namespace std;

int main() {
    double prices[10];
    cout << "Enter prices of 10 items:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> prices[i];
    }

    double maxPrice = prices[0];
    for (int i = 1; i < 10; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

    cout << "Maximum Price = " << maxPrice << endl;
    return 0;
}
