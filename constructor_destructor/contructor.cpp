#include <iostream>
using namespace std;

class Customer
{

    string name;
    int acct_number;
    int balance;

public:
    // Default Constructor
    Customer()
    {
        name = "mohit";
        acct_number = 1;
        balance = 1000;
    }

    // Parameterized Constructor->in this we passed parameter
    // this -> jis pointer ne ise call karta hai uska address store karke rakhta hai
    Customer(string name, int acct_number, int balance)
    {
        this->name = name;
        this->acct_number = acct_number;
        this->balance = balance;
    }

    // Constructor overloading -> in this contructor show garbage
    Customer(string a, int b)
    {
        name = a;
        acct_number = b;
        balance = 50;
    }

    // // inline Contructor
    // inline Customer(string a, int b, int c) : name(a), acct_number(b), balance(c)
    // {
    // }

    void display()
    {
        cout << name << " " << acct_number << " " << balance << endl;
    }

    // Copy Constructor
    Customer(Customer &B)
    {
        name = B.name;
        acct_number = B.acct_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    A1.display();
    Customer A2("mohit", 2, 100);
    A2.display();
    Customer A3("lohit", 3);
    A3.display();
    // Customer A4("lohit", 3, 100);
    // A4.display();
    // Copy Contructor
    Customer A5(A3);
    A5.display();
}
