// they are attributes of classes or class member
// it is declared using staic keyword
// only one copy of that member is created for the entire class and is shared by all the object
// static member function
#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acct_number, balance;
    // static data member
    static int total_Customer;
    static int total_acct_balance;

public:
    Customer(string name, int acct_number, int balance)
    {
        this->name = name;
        this->acct_number = acct_number;
        this->balance = balance;
        total_acct_balance += balance;
        total_Customer++;
    }
    // static member function
    static void accesStatic()
    {
        cout << "Total Customer" << total_Customer << endl;
        cout << "Total accunt balance" << total_acct_balance << endl;
    }

    void display()
    {
        cout << name << " " << acct_number << " " << balance << endl;
    }
};
// initialize the static member
int Customer::total_acct_balance = 0;
int Customer::total_Customer = 0;

int main()
{
    Customer A1("Mohit", 1, 1000);
    Customer A2("Rohit", 2, 1000);
    Customer::accesStatic();
    A1.display();
    A2.display();
}