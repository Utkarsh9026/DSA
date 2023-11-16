#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string s1,s2;
	    for(int i=0;i<n/2;i++){
	        s1=s[i];
	    }
	    for(int i=n/2;i<n;i++){
	        s2=s[1];
	    }
	    if(s1==s2){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
