#include <iostream>
using namespace std;

class Account {
    string name;
    int balance;

public:
    Account(string user, int bal = 0) {
        name = user;
        balance = bal;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    Account user("John Doe");
    int choice, amount;

    while (true) {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Amount to deposit: ";
            cin >> amount;
            user.deposit(amount);
        } else if (choice == 2) {
            cout << "Amount to withdraw: ";
            cin >> amount;
            user.withdraw(amount);
        } else if (choice == 3) {
            user.showBalance();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
