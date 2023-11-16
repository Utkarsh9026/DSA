#include <iostream>
using namespace std;

int main()
{
    cout << "This is control structure tutorial" << endl;
    int age;
    cout << "Enter the age:" << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "Eligible for voting" << endl;
    }
    else if (age == 18)
    {
        cout << "Falls in the category of immature" << endl;
    }
    else
    {
        cout << "Not elligible for voting" << endl;
    }
    return 0;
}