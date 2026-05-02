#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j;
            if (j < 5) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
