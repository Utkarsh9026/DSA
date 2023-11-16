#include <iostream>
using namespace std;

class Shopitem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of item is " << id << endl;
        cout << "The price of item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int i = 0;
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptrTemp = ptr;
    int p;
    float q;
    

    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item number " << i + 1  << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}