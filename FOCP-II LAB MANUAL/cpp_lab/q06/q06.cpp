#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    cout << "\n-------------------------------------------" << endl;
    cout << "EmpNo\tBasic\t\tBonus\t\tNet Salary" << endl;
    cout << "-------------------------------------------" << endl;

    for (int i = 1; i <= n; i++) {
        double basic;
        cout << "Enter basic salary for Employee " << i << ": ";
        cin >> basic;
        double bonus = 0.12 * basic;
        double netSalary = basic + bonus;
        cout << i << "\t" << basic << "\t\t" << bonus << "\t\t" << netSalary << endl;
    }
    return 0;
}
