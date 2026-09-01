#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolder = name;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance.\n";
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void showBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Faraz", 12345, 5000);

    account.showBalance();

    cout << "\nDepositing\n";
    account.deposit(2000);

    cout << "\nWithdrawing\n";
    account.withdraw(1500);

    cout << "\nFinal Account Details:\n";
    account.showBalance();

    return 0;
}