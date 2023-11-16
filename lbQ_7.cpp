#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        n=n/10;
        ans=(digit*pow(2,i))+ans;
        i++;
    }
    cout<<ans<<endl;
}