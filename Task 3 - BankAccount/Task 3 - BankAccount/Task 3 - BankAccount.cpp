#include <iostream>
#include <string>
using namespace std;

class BankAccount 
{
    private:
        string clientName;
        string accountNumber;
        double balance;

    public:
        BankAccount(const string name, string accNumber, double initialBalance)
        {
            clientName = name;
            accountNumber = accNumber;
            balance = initialBalance;
        }

        void printAccount()
        {
            cout << "Client name: " << clientName << endl;
            cout << "Bank account number: " << accountNumber << endl;
            cout << "Amount available: " << balance << " lv." << endl;
        }

        void deposit(double amount) 
        {
            if (amount > 0) 
            {
                balance += amount;
                cout << "Deposit " << amount << " lv. successfully." << endl;
            }
            else {
                cout << "Error: Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount) 
        {
            if (amount > 0 && amount <= balance) 
            {
                balance -= amount;
                cout << "Withdraw " << amount << " lv. successfully." << endl;
            }
            else {
                cout << "Error: Invalid withdrawal amount or insufficient availability." << endl;
            }
        }
};

int main() 
{
    BankAccount account("Stoyan Skuliev", "BG123456789012345", 1000.0);

    cout << "Bank account information:" << endl;
    account.printAccount();

    account.deposit(500.0);
    cout << "After deposit:" << endl;
    account.printAccount();

    account.withdraw(200.0);
    cout << "After withdraw:" << endl;
    account.printAccount();
}