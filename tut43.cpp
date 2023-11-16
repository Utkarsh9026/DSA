//Ambiguity resolution...

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 ::greet();
    };
};

class B
{
public:
    void say()
    {
        cout << "Hello world " << endl;
    }
};

class D : public B
{
public:
    void say()
    {
        cout << "Hello how are you?" << endl;
    }
};
int main()
{
    // Base1 b1;
    // b1.greet();

    // Base2 b2;
    // b2.greet();

    // Derived d;
    // d.greet();
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}