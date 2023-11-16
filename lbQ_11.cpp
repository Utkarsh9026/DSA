#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int arrOdd[5]={1,2,3,4,5};
    int arrEven[6]={6,7,8,9,10,11};
     
    int oddIndex=binarySearch(arrOdd,5,4);
    cout<<"The index is:"<<oddIndex<<endl;

    int evenIndex=binarySearch(arrEven,6,10);
    cout<<"The index is:"<<evenIndex<<endl;
}