#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor called !!!" << endl;
        a = obj.a;
    }

    void displayNumber()
    {
        cout << "The number of the object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.displayNumber();
    y.displayNumber();
    z.displayNumber();

    Number z1(z); //copy constructor envoked
    z1.displayNumber();

    return 0;
}
