#include <iostream>
using namespace std;

int main() {
    double temp[30];
    cout << "Enter daily temperatures for 30 days:" << endl;
    for (int i = 0; i < 30; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }

    double minTemp = temp[0];
    for (int i = 1; i < 30; i++) {
        if (temp[i] < minTemp) minTemp = temp[i];
    }

    cout << "Minimum temperature for the month = " << minTemp << endl;
    return 0;
}
