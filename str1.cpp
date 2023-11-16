#include<bits/stdc++.h>
using namespace std;

bool isPal(string &str){
    string rev;
    reverse(str.begin(),str.end());
    return (rev==str);
}

int main(){
   string str;
   cout<<"Enter the string "<<endl;
   cin>>str;
   if(isPal(str)){
    cout<<"yes"<<endl;
   }else{
    cout<<"no"<<endl;
   }
}