#include<iostream>
using namespace std;
int main()
{
    string ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;
    if(ch>="A" && ch<="Z")
    {
        cout<<"The input character is Upper Case"<<endl;
    }
    else if(ch>="a" && ch<="z")
    {
        cout<<"The input character is Lower Case"<<endl;
    }
    else
    {
        cout<<"The input character is numeric"<<endl;
    }

    return 0;
}

