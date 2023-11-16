#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int n1,n2,n3,n4;
	    cin>>n1>>n2>>n3>>n4;
	    cout<<std::max({n1,n2,n3,n4},comp)<<endl;
	    
	}
	return 0;
}
