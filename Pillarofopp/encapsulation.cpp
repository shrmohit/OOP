// Encapsulation
//  wrapping up data and informartion into one single unit,while controlling acess to them
#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acct_number, balance;

public:
    Customer(string name, int acct_number, int balance)
    {
        this->name = name;
        this->acct_number = acct_number;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "invalid amount";
        }
    }

    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
        else
        {
            cout << "invalid amount";
        }
    }

    void display()
    {
        cout << name << " " << acct_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1("Mohit", 1, 1000);
    Customer A2("Rohit", 2, 1000);
    A1.withdraw(20);
    A1.display();
    A2.deposit(100);
    A2.display();
}