#include<iostream>
using namespace std;

int main()
{
    int tam=1330;
    // cout<<"Enter total amount"<<endl;
    // cin>>tam;
    int n,m,p;

    switch(tam)
    {
        case 100:
        {
          n=(1330/100);
          cout<<"The number of 100 rupees note is:"<<n<<endl;
        }
        case 50:
        {
            m=(1330-n)/50;
            cout<<"The number of 50 rupees note is:"<<m<<endl;
        }
        case 20:
        {
            p=(1330-n)/20;
            cout<<"The number of 20 rupees note is:"<<p<<endl;
        }
        case 10:
        {
            
        }
    }
    

}