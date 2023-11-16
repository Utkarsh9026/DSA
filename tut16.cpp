#include <iostream>
using namespace std;

 void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y,d;
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << "Enter the second number" << endl;
    cin >> y;
    swap(&x, &y);
    cout << "The first number after swaped is " <<x<<endl;
    cout << "The second number after swaped is " <<y<<endl;

    return 0;
}