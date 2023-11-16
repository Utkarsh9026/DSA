#include<iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[4]={2,3,1,4};
    insertionSort(A,4);
    display(A,4);
}