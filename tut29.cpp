#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);//Construction Declaration 

    void printData(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void)
{
    a = 23;
    b = 63;
}
int main()
{
    Complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();

    return 0;
}