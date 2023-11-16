#include <iostream>
using namespace std;

class Complex
{
    int real, complex;

public:
    void setData(int a, int b)
    {
        real = a;
        complex = b;
    }
    void DisplayData()
    {
        cout << "The real part of complex number is " << real << endl;
        cout << "The complex part of complex number is " << complex << endl;
    }
};

int main()
{
    // Complex c1;
    // // c1.setData(1, 2);
    // // c1.DisplayData();

    // Complex *ptr=&c1;
    // (*ptr).setData(23,63);
    // (*ptr).DisplayData();

    Complex *ptr= new Complex;
    // (*ptr).setData(23,63);
    // (*ptr).DisplayData();

    ptr->setData(3,4);
    ptr->DisplayData();
    return 0;
}