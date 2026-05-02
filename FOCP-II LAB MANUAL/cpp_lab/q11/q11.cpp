#include <iostream>
using namespace std;

int main() {
    int quantity;
    double unitPrice;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;

    double total = quantity * unitPrice;
    double finalAmount = total;

    if (quantity > 1000) {
        double discount = 0.10 * total;
        finalAmount = total - discount;
        cout << "Discount Applied (10%): " << discount << endl;
    } else {
        cout << "No discount applied." << endl;
    }

    cout << "Total Amount: " << finalAmount << endl;
    return 0;
}
