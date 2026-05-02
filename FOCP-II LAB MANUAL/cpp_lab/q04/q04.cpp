#include <iostream>
using namespace std;

int main() {
    int itemNo;
    double quantity, unitPrice;
    cout << "Enter item number: ";
    cin >> itemNo;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;

    double amount = quantity * unitPrice;
    double discount = 0.20 * amount;
    double finalAmount = amount - discount;

    cout << "\nItem No     : " << itemNo << endl;
    cout << "Amount      : " << amount << endl;
    cout << "Discount 20%: " << discount << endl;
    cout << "Final Amount: " << finalAmount << endl;
    return 0;
}
