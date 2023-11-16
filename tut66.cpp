#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Utkarsh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Utkarsh(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void Display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
       
    }
};

int main()
{
    Utkarsh<> u(1, 2.45, 'c');
    u.Display();

    cout<<endl;
    
    Utkarsh <char, int, int>ut('t',4,5);
    ut.Display();

    return 0;

}
