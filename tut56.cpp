#include <iostream>
using namespace std;

class Base
{
public:
    int var_base = 1;
    virtual void Display()
    {
        cout << "1.The value of base class variable is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived = 2;
    void Display()
    {
        cout << "2.The value of base class variable is " << var_base << endl;
        cout << "2.The value of derived class variable is " << var_derived << endl;
    }
};

int main()
{
    Base *bptr;
    Base objb;
    Derived objd;
    bptr = &objd;
    bptr->Display();

    return 0;
}