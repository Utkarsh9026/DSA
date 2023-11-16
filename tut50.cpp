#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *ptr << endl;
    cout << "The address of a is " << ptr << endl;

    float *b= new float(10.56);
    cout<<"The value of b is "<<*b<<endl;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    delete  arr;

    cout << "The value of arr[0] : " << *arr << endl;
    cout << "The value of arr[1] : " << *(arr+1) << endl;
    cout << "The value of arr[2] : " << *(arr+2) << endl;

    return 0;
}