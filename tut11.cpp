#include <iostream>
using namespace std;
int main()
{
    int a=4;
    int* b;
    b=&a;
    cout <<"The address of a is "<<b<<endl;
    cout <<"The address of a is "<<&a<<endl;
    cout <<"The value of a is "<<*b<<endl;
    cout <<"The value of a is "<<a<<endl;
    return 0;
}