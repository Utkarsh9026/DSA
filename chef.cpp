#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    int A[n];
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
        int range=n;
	 if(std::is_sorted(A,A+range))
	 {
	     cout<<"Yes"<<endl;
	 }
	 else
	 {
	     cout<<"No"<<endl;
	 }
	 
	    
	}
	
	return 0;
}
