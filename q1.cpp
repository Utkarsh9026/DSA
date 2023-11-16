#include<bits/stdc++.h>
using namespace std;

int index(vector<int> v,int ans){
    for(int i=v.size()-1;i>=0;i--){
        if(ans==v[i]){
            cout<<i;
            break;
        }
    }
}

int frequency(vector<int>x){
    int ans=0;
    for(int i=0;i<x.size()-1;i++){
        if(x[i]==x[i+1]){
            ans=x[i];
            break;
        }
    }
    return ans;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> x;
    for(int i=0;i<v.size();i++){
        x.push_back(v[i]);
    }

    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    int ans = frequency(x);
    cout<<ans<<endl;
    int res=index(v,ans);
    return 0;
}