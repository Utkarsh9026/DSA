#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> vec1;
    int elements, size;
    cout << "Enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << (i + 1) << " element of vector " << endl;
        cin >> elements;
        vec1.push_back(elements);
    }
    Display(vec1);
    vec1.push_back(54);
    Display(vec1);
    vec1.pop_back();
    Display(vec1);

    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter+1, 45);
    Display(vec1);

    return 0;
}