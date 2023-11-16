#include<bits/stdc++.h>
using namespace std;

int kthGreatestElement(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        pq.pop();
        int element = arr[i];
        if(pq.top()<element){
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}

int kthSmallestElement(int arr[],int n,int k){
    priority_queue<int> pq;

    for(int i = 0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        int element = arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int main(){
    int arr[] = {12,16,10,4,25};
    int n = 5;
    int k=2;
    int ans = kthGreatestElement(arr,n,k);
    cout<<"Answer is: "<<ans<<endl;

    return 0;
}
