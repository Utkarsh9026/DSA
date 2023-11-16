#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id of Data " << endl;
        cin >> id;
        count++;
    } 

    void getData(void)
    {
        cout << "The id of Employee is " << id << " and the number is " << count << endl;
    }
};


 int Employee::count;

int main()
{
    Employee harry, lovish, rohan;

    harry.setData();
    harry.getData();

    lovish.setData();
    lovish.getData();

    rohan.setData();
    rohan.getData();

    return 0;
}
