#include <iostream>
using namespace std;

int main() {
    int marks[3][5];

    for (int i = 0; i < 3; i++) {
        cout << "Enter marks of Student " << i + 1 << " in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> marks[i][j];
        }
    }

    cout << "\nMarks of 1st student in 2nd subject = " << marks[0][1] << endl;
    cout << "Marks of 3rd student in 5th subject = " << marks[2][4] << endl;
    return 0;
}
