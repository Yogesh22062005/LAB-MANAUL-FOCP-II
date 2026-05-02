#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialSet = "@#$%!&*";

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialSet.find(ch) != string::npos) hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Password is STRONG and accepted." << endl;
    } else {
        cout << "Password is WEAK. Requirements not met:" << endl;
        if (!hasUpper) cout << " - Missing uppercase letter" << endl;
        if (!hasLower) cout << " - Missing lowercase letter" << endl;
        if (!hasDigit) cout << " - Missing digit" << endl;
        if (!hasSpecial) cout << " - Missing special character (@#$%!&*)" << endl;
    }
    return 0;
}
