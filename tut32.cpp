#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int x, int y = 4, int z = 5)
    {
        data1=x;
        data2=y;
        data3=z;
    }

    void printData();
    
    
};

void Simple::printData()
{
        cout << "The value of data1,data2 and data3 are " << data1 << "," << data2 << " and " << data3 << " respectivelly " << endl;
}
int main()
{
    Simple s(1,2,3);
    s.printData();
    return 0;
}