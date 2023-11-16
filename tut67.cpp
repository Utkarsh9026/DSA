#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(5.00, 3.00);
    cout << "The average value is " << a << endl;
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}