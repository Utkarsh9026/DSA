#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string st;
	    cin>>st;
	    int s=0,t=0;
	    for(int i=0;i<n;i++){
	        if(st[i]=='START38'){
	            s++;
	        }else{
	            t++;
	        }
	    }
	    cout<<s<<" "<<t<<endl;
	}
	return 0;
}
