#include<iostream>
using namespace std;

bool two_pair(int a[],int x,int n){
    int left = 0;
    int right = n-1;
    while(left!=right){
        if(a[left]+a[right]==x) 
            return true;
        else if(a[left]+a[right]>x)
            right--;
        else
            left++;

    }
    return false;
}
int main(){
    int a[]={1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    bool res = two_pair(a,3,size);
    if(res==true)
        cout<<"Yes";
    else    
        cout<<"no";
    return 0;
}
