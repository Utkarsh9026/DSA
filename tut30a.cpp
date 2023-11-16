#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    //Complex c(4, 6); //implicit declaration
   // c.printNumber();

    Complex b = Complex(7, 6);//expicit declaration
    b.printNumber();
    return 0;
}
