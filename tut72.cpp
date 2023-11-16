#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;
    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(1);

    // list1.pop_back();
    // list1.pop_front();
     list1.sort();
    //  list1.reverse();
    display(list1);

    list<int> list2(3);
    list<int> :: iterator iter = list2.begin();
    *iter=45;
    iter++;
    *iter=8;
    iter++;
    *iter=97;
    iter++;

    list2.sort();
    display(list2);
    
    list1.merge(list2);
    list1.reverse();
    display(list1);
    return 0;
}