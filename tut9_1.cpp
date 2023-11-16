#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    switch(age)
    {
        case 12:
        cout<<"The age is 12 and you are underage for voting"<<endl;
        break;
        case 18:
        cout<<"The age is 18 and you just became elligible for voting"<<endl;
        break;
        default:
        cout<<"You are not elligible for voting"<<endl;
    }
        cout<<"You have finished switch case"<<endl;
        return 0;
}