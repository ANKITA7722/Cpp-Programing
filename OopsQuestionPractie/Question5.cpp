// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
//  Include member functions to deposit and withdraw money from the account.



#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor to initialize the account number and balance
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Successfully withdrew $" << amount << ". New balance: $" << balance << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    // Function to display the account number and balance
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object with an account number and initial balance
    BankAccount account("123456789", 500.00);

    // Display initial account details
    account.display();

    // Deposit money into the account
    account.deposit(200.00);

    // Withdraw money from the account
    account.withdraw(150.00);

    // Try withdrawing more money than the balance
    account.withdraw(600.00);

    // Display final account details
    account.display();

    return 0;
}
