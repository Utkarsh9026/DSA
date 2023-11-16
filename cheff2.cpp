#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int P[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>P[i];
            if(P[i]==0 && P[i+1]==0)
	       {
	        cout<<"A";
	       }
	       else if(P[i]==0 && P[i+1]==1)
	       {
	        cout<<"T";
	       }
	        else if(P[i]==1 && P[i+1]==0)
	       {
	        cout<<"C";
	       }
	        else
	       {
	        cout<<"G";
	       }
	    } 
	    for(int i=0;i<n;i++)
	    {
	      cout<<P[i];
	    }
        
	
	}
	return 0;
}
