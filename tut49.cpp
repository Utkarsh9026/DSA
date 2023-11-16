#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(a+j)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "Test class is executed " << endl;
    }
};

int main()
{
    Test t(1, 2);

    return 0;
}