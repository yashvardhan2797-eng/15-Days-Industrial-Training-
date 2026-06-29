#include <iostream>
using namespace std;

class BankAccount
{
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void withdraw(float amount)
    {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void display()
    {
        cout << "Final Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    float depositAmount, withdrawAmount;

    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;

    b.deposit(depositAmount);

    cout << "Enter Withdraw Amount: ";
    cin >> withdrawAmount;

    b.withdraw(withdrawAmount);

    b.display();

    return 0;
}