#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setId()
    {
        salary = 4000;
        cout << "Enter the Id of employee " << endl;
        cin >> Id;
    }

    void getId()
    {
        cout << "The Id of employee is " << Id << endl;
    }
};

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}