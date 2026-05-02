#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp;
    cout << "Temperature Conversion" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        double celsius = (temp - 32) * 5.0 / 9.0;
        cout << temp << " F = " << celsius << " C" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        double fahrenheit = (temp * 9.0 / 5.0) + 32;
        cout << temp << " C = " << fahrenheit << " F" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
    return 0;
}
