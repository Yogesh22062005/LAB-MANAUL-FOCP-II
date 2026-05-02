#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    cout << "Enter username: ";
    cin >> username;

    bool valid = true;
    for (char ch : username) {
        if (!isalnum(ch) && ch != '_') {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << "Username '" << username << "' is VALID." << endl;
    } else {
        cout << "Username '" << username << "' is INVALID. Only letters, digits, and underscores are allowed." << endl;
    }
    return 0;
}
