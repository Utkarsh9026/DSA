#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Harsh"] = 98;
    marksMap["Navnish"] = 90;
    marksMap["Roshan"] = 76;
    marksMap.insert({{"Harry", 56}, {"Sumit", 93}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The maximum size is: "<<marksMap.max_size()<<endl;
    cout<<"The return value of empty is: "<<marksMap.empty()<<endl;
    return 0;
}