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
        int bit = n & 1;
        n=n>>1;
        ans=(bit*pow(10,i))+ans;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}