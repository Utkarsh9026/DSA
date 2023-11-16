#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    string s,s1="10",s2="01",s3="0";
	     if(n%2==0){
	        for(int i=0;i<n/2;i=i+2){
	            s.append(s1);
	        }
	        for(int i=0;i<n/2;i=i+2){
	            s.append(s2);
	        }
	        cout<<endl;
	    }
	    else{
	        s.append(s3);
	        n=n-1;
	        for(int i=0;i<n/2;i=i+2){
	           s.append(s1);
	        }
	        cout<<s<<endl;
	    }
	  
	}
	return 0;
}