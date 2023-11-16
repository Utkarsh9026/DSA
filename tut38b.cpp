//single inheritance example in private visibility mode...


#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void processData();
    void displayData();
};

void Derived::processData()
{
    setData();
    data3 = data2 * getData1();
}

void Derived::displayData()
{
    cout << "The value of Data1 is " << getData1() << endl;
    cout << "The value of Data2 is " << data2 << endl;
    cout << "The value of Data3 is " << data3 << endl;
}

int main()
{
    Derived der;
    
    der.processData();
    der.displayData();
    return 0;
}