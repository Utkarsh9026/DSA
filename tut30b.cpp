#include <iostream>
using namespace std;
class Point
{
    int a, b;

public:
    Point(int, int);

    void printPoint()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }
};

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Point p(4, 5);
    p.printPoint();

    return 0;
}
