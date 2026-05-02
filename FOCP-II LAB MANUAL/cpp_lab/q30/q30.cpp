#include <iostream>
using namespace std;

int main() {
    double salary[10];
    double total = 0;

    cout << "Enter salaries of 10 employees:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    double average = total / 10.0;
    cout << "\nTotal Salary   = " << total << endl;
    cout << "Average Salary = " << average << endl;
    return 0;
}
