//Inheritance syntax and visibility mode...

#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }

    Employee(){};
};

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << "The salary of Harry is " << harry.salary << endl;
    cout << "The salary of Rohan is " << rohan.salary << endl;
    Programmer utkarsh(63);
    cout << utkarsh.languageCode << endl;
    cout<<utkarsh.id<<endl;
    utkarsh.getData();
    return 0;
}