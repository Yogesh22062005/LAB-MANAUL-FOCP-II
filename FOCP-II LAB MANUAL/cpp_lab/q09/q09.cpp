#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit" << endl;
    } else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << ch << " is a Vowel" << endl;
        } else {
            cout << ch << " is a Consonant" << endl;
        }
    } else {
        cout << ch << " is a Special Character" << endl;
    }
    return 0;
}
