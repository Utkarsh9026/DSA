#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string &str,string &substr){
   int j=0;
   for(int i=0;i<str.length() && j<substr.length();i++){
        if(str[i]==substr[j]){
            j++;
        }
   }
   return (j==substr.length());
}


int main(){
    string str="abcde",substr="aed";
    cout<<"Enter the string:"<<endl;
    cin>>str;
    cout<<"Enter the substring: "<<endl;
    cin>>substr;
    if(isSubsequence(str,substr)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}