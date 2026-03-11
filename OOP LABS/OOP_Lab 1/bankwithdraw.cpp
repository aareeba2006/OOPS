#include <iostream>
using namespace std;

// Function for savings account withdrawal
double withdrawSavings(double amount, double balance) {
    if(amount > 100000) {
        cout << "Cannot withdraw more than 100000" << endl;
        return balance;
    }

    double fee = amount * 0.02;              // 2% fee
    double tax = (amount > 50000) ? amount * 0.05 : 0;
    double totalDeduction = amount + fee + tax;

    if(totalDeduction > balance) {
        cout << "Insufficient balance!" << endl;
        return balance;
    }

    cout << "Withdrawal successful!" << endl;
    cout << "Amount withdrawn: " << amount << endl;
    cout << "Fee (2%): " << fee << ", Tax (if applicable): " << tax << endl;

    return balance - totalDeduction;
}

// Function for current account withdrawal
double withdrawCurrent(double amount, double balance) {
    if(amount > 100000) {
        cout << "Cannot withdraw more than 100000" << endl;
        return balance;
    }

    double fee = 100;                         // fixed fee
    double tax = (amount > 50000) ? amount * 0.05 : 0;
    double totalDeduction = amount + fee + tax;

    if(totalDeduction > balance) {
        cout << "Insufficient balance!" << endl;
        return balance;
    }

    cout << "Withdrawal successful!" << endl;
    cout << "Amount withdrawn: " << amount << endl;
    cout << "Fee (100): " << fee << ", Tax (if applicable): " << tax << endl;

    return balance - totalDeduction;
}

int main() {
    double balance = 200000;
    double amount;
    int accountNumber;
    char type;

    cout << "Enter account type (S for savings / C for current): ";
    cin >> type;

    if(type == 'S' || type == 's') {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Amount to withdraw: ";
        cin >> amount;

        balance = withdrawSavings(amount, balance);
    }
    else if(type == 'C' || type == 'c') {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Amount to withdraw: ";
        cin >> amount;

        balance = withdrawCurrent(amount, balance);
    }
    else {
        cout << "Invalid account type!" << endl;
    }

    cout << "Remaining balance: " << balance << endl;

    return 0;
}