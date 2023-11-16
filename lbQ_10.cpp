#include<iostream>
using namespace std;

int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sortOne(int arr[], int n)
{
   int i=0;
   int j=n-1;
   while(arr[i]==0 && i<j)
   {
    i++;
   }
   while(arr[j]==1 && i<j)
   {
    j--;
   }
   if(arr[i]==1 && arr[j]==0 && i<j)
   {
    swap(arr[i],arr[j]);
   }
}

int main()
{
    int arr[5]={1,0,0,1,1};
    sortOne(arr,5);
    printArray(arr,5);

    return 0;
}