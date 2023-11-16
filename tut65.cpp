#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,n;
	    cin>>a>>b>>c;
	    n=max(a,b,c);
		cout<<n<<endl;
	}
	return 0;
}
