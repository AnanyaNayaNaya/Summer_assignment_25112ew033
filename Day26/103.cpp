#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 5000, amount;

    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Balance = " << balance;
        break;

    case 2:
        cout << "Enter amount: ";
        cin >> amount;
        balance += amount;
        cout << "New Balance = " << balance;
        break;

    case 3:
        cout << "Enter amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Remaining Balance = " << balance;
        } else {
            cout << "Insufficient Balance";
        }
        break;

    default:
        cout << "Invalid Choice";
    }

    return 0;
}