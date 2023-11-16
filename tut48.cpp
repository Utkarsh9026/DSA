#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor is called " << endl;
    }

    void printDataBase1()
    {
        cout << "The value of data of Base1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int b)
    {
        data2 = b;
        cout << "Base2 class constructor is called " << endl;
    }

    void printDataBase2()
    {
        cout << "The value of data of Base2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called " << endl;
    }

    void printDataDerived()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{

    Derived d(1, 3, 5, 7);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();

    return 0;
}