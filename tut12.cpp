#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 2, 3, 4, 5}, i = 0;
    // while (i < 5)
    // {
    //     cout << A[i] << endl;
    //     i++;
    // }
    do
    {
        cout << A[i] << endl;
        i++;
    } while (i < 5);
    int *p = A;
    cout << "The address of first element of A is " << p << endl;
    cout << "The value of first element of A is " << *p <<endl;
    cout << "The value of second element of A is " << *(p + 1) << endl;
    cout << "The value of third element of A is " << *(p + 2) << endl;
    cout << "The value of fourth element of A is " << *(p + 3) << endl;
    cout << "The value of fifth element of A is " << *(p + 4) << endl;

    return 0;
}