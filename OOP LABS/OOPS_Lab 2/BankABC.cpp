#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;
    int transactions;

public:
    BankAccount()
    {
        balance = 0;
        transactions = 0;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        transactions++;
    }

    void withdrawal(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            transactions++;
            cout << "Withdrawal Successful" << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance is: " << balance << endl;
    }

    void displayTransactions()
    {
        cout << "Total Transactions: " << transactions << endl;
    }

    void displayInterest()
    {
        cout << "Interest: " << balance * 0.05 << endl; // 5% interest
    }
};

int main()
{
    BankAccount ABC;
    int choice = 0;
    double amount;

    while (choice != 6)
    {
        cout << "1.Display account balance" << endl;
        cout << "2.Dislay number of transactions" << endl;
        cout << "3. Display interest earned for this period" << endl;
        cout << "4. Make a deposit" << endl;
        cout << "5. Make a withdrawal" << endl;
        cout << "6. Exit the program" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            ABC.displayBalance();
            break;
        case 2:
            ABC.displayTransactions();
            break;
        case 3:
            ABC.displayInterest();
            break;
        case 4:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            ABC.deposit(amount);
            break;
        case 5:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            ABC.withdrawal(amount);
            break;
        case 6:
            cout << "Exiting program." << endl;
            break;
        }
    }
    return 0;
}