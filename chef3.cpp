#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b;
	    cin>> x >> y;
	    if(x%10==0 && y%10==0)
	    {
	        cout<<abs((x/10)-(y/10))<<endl;
	    }
	    else if(x%10!=0 && y%10!=0)
	    {
	        a=(x/10)+1;
	        b=(y/10)+1;
	        cout<<abs(a-b)<<endl;
	    }
	}
	return 0;
}