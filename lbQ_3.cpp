#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"Enter the temperature in Farenheit"<<endl;
    cin>>f;
    c=5 * (f - 32) / 9;
    cout<<"The temperature in Celsius is: "<<c<<endl;
    return 0;
}