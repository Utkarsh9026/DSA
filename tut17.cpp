#include <iostream>
using namespace std;

// int factorial(int a)
// {
//     if (a<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return a * factorial(a - 1);
//     }
// }

int fib(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}
int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    // cout << "The factorial of " << n << " is " << factorial(n) << endl;
    cout<<"The term in fibonacci squence at position"  << a  <<  "is"  << fib(a)<<endl;
    return 0;
}
