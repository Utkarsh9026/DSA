#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaring class as a friend
    friend int Calculator::sumRealComplex(Complex,Complex);
    friend int Calculator::sumComComplex(Complex,Complex);

     // Declaring whole class as a friend
    // friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(3, 8);
    c2.printNumber();

    Calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part of complex number is " << res << endl;
    int resc = calc.sumComComplex(c1, c2);
    cout << "The sum of complex part of complex number is " << resc << endl;
    return 0;
}