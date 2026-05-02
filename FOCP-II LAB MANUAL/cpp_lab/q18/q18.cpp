#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string id;
    cout << "Enter ID to check: ";
    cin >> id;

    string reversed = id;
    reverse(reversed.begin(), reversed.end());

    if (id == reversed) {
        cout << id << " is a Palindrome." << endl;
    } else {
        cout << id << " is not a Palindrome." << endl;
    }
    return 0;
}
