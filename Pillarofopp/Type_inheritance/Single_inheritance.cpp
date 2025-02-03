#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I am working\n";
    }
};

class Student : public Human
{

    int roll_number, fees;

    // contructor
public:
    Student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << "age is" << age << ",roll_number is" << roll_number << ",fees is" << fees << endl;
    }
};
int main()
{
    Student A1("mohit", 23, 49, 4500);
    A1.display();
}