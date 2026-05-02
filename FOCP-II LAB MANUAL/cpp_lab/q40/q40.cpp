#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int totalDigits = 0, totalSpecial = 0;
    for (char ch : input) {
        if (isdigit(ch)) totalDigits++;
        else if (!isalpha(ch) && ch != ' ') totalSpecial++;
    }

    string trimmed = "";
    int start = 0, end = input.length() - 1;
    while (start <= end && input[start] == ' ') start++;
    while (end >= start && input[end] == ' ') end--;

    bool prevSpace = false;
    for (int i = start; i <= end; i++) {
        if (input[i] == ' ') {
            if (!prevSpace) {
                trimmed += ' ';
                prevSpace = true;
            }
        } else {
            trimmed += input[i];
            prevSpace = false;
        }
    }

    for (int i = 0; i < (int)trimmed.length(); i++) {
        trimmed[i] = (i == 0) ? toupper(trimmed[i]) : tolower(trimmed[i]);
    }

    int wordCount = 0;
    bool inWord = false;
    for (char ch : trimmed) {
        if (ch != ' ' && !inWord) { wordCount++; inWord = true; }
        else if (ch == ' ') inWord = false;
    }

    bool isValid = true;
    for (char ch : trimmed) {
        if (!isalpha(ch) && !isdigit(ch) && ch != ' ') {
            isValid = false;
            break;
        }
    }

    cout << "\nNormalized String  : " << trimmed << endl;
    cout << "Total Words        : " << wordCount << endl;
    cout << "Total Digits       : " << totalDigits << endl;
    cout << "Total Special Chars: " << totalSpecial << endl;

    if (isValid) {
        cout << "Validation: String is VALID for storage." << endl;
    } else {
        cout << "Validation: String is INVALID. Contains special characters." << endl;
    }
    return 0;
}
