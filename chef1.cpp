#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	int A[n];
	cin>>t;
	cin>>n;
	while(t--)
	{
	  int min=0,plus=0,res=0;
	  for(int i=0;i<n;i++)
	  {
	      cin>>A[i];
	      if(A[i]==-1)
	       min++;
	      else
	       plus++;
	  }
	  if((min+plus)%2!=0)
	    res=-1;
	  else if(min==plus)
	    res=0;
	  else if(min<plus)
	  {
	      while(min!=plus)
	      {
	          min++;
	          plus--;
	          res++;
	      }
	  }
	  else
	  {
	      while(min!=plus)
	      {
	          min--;
	          plus++;
	          res++;
	      }
	  }
	  cout<<res<<endl;
	}
	return 0;
}
