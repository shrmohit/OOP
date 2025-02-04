// an exception handling is an unexpected problem that arises during the execution
// of a program and our program terminate suddenly with some error/issues
// Exception occurs during the running of the program

// The try keyword represent a block of code that may throw an
// exception placed inside the try block. its followed by one
// or movre catch blocks. if an exception occurs ,try block
// throw that exception

// the catch statement represent a block of code that is executed
// when a particular exception is thrown from the try block
// the code to handle the exxception is written inside the catch block

// an exception in C++ can be throw keyword .
// when a person encounters a throw statement ,then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception

// why this is need

// throw -> it means throw exception message
//  try -> it try used for check exception in callback
//  catch -> it recived exception message and print it
// -> it catch a string message

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    };

    // deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << "is credited successfully" << endl;
        }
        else
        {
            throw "Amount should be greater than 0\n";
        }
    }

    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << "is withdraw successfully" << endl;
        }
        else if (amount < 0)
        {
            throw "amount should be greater than 0\n";
        }
        else
        {
            throw "Your balance is Low\n";
        }
    }

    void display()
    {
        cout << "Total Balance is" << balance << endl;
    }
};

int main()
{
    Customer C1("Rohit", 5000, 101);
    try
    {
        C1.deposit(200);
        C1.withdraw(70000);
        C1.deposit(100); // this is not run
    }
    catch (const char *e)
    { // char means type of error
        cout << "Exception Occured: " << e << endl;
    }
    C1.display();
}