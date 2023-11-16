#include<iostream>
using namespace std;
int main()
{
    int T,a,b,c;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a+b>c)
        {
            cout<<"TRAIN"<<endl;
        }
        else if(a+b<c)
        {
            cout<<"PLANEBUS"<<endl;
            
        }
        else
        {
            cout<<"EQUAL"<<endl;
        }
    }
    return 0;
}