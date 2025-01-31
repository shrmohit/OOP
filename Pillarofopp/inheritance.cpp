// inheritance -> the capability of class to derive(inherit) property and characteristic from another class
#include <iostream>
using namespace std;

class Human
{

    string Religion, color;

protected:
    string name;
    int age, weight;
};

class Student : private Human
{
private:
    int roll_number, fees;

public:
    Student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->fees = fees;
    }

    void display()
    {
        cout << name << "age is" << age << ",weight is" << weight << ",roll_number" << roll_number << ",fees is" << fees << endl;
    }
};
int main()
{
    Student A1("Rohit", 12, 400, 23, 200);
    A1.display();
}
