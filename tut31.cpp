//Constructor overloading

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    c1.displayNumber();

    Complex c2(4);
    c2.displayNumber();

    Complex c3;
    c3.displayNumber();

    return 0;
}