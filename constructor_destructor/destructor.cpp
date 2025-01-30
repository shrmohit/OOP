// DESTRUCTOR
//  #include <iostream>
//  using namespace std;

// class Customer
// {
//     string name;
//     int *data;

// public:
//     // CONSTRUCTOR
//     Customer()
//     {
//         name = "Rohit";
//         data = new int;
//         *data = 10;
//         cout << "constructor is called" << endl;
//         ;
//     }
//     // destructor
//     ~Customer()
//     {
//         delete data;
//         cout << "Destructor is called" << endl;
//     }
// };

// int main()
// {
//     Customer A1;
// }

// ORDER OF DESTRUCTOR
#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:
    // CONSTRUCTOR
    Customer(string name)
    {
        this->name = name;
        cout << "constructor is called" << name << endl;
    }

    ~Customer()
    {
        delete data;
        cout << "destructor is called" << name << endl;
    }
};

int main()
{
    Customer A1("1"), A2("2"), A3("3");
}