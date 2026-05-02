#include <iostream>
using namespace std;

int main() {
    string name;
    double marks[5];
    double total = 0;

    cout << "Enter student name: ";
    cin >> name;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = total / 5.0;

    cout << "\nReport Card - " << name << endl;
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 75) cout << "Grade: Distinction" << endl;
    else if (percentage >= 60) cout << "Grade: First Class" << endl;
    else if (percentage >= 50) cout << "Grade: Second Class" << endl;
    else if (percentage >= 35) cout << "Grade: Pass" << endl;
    else cout << "Grade: Fail" << endl;

    return 0;
}
