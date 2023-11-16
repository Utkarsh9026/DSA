#include<iostream>
using namespace std;
int sum=0;
int sumArray(int *A, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    return sum;
   
}

int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int A[n];
    for (int i=0;i<n;i++)
    {
       cout<<"Enter the element of array:"<<endl;
       cin>>A[i]; 
    }
    sumArray(A,n);
    cout<<"The sum of entered element in array is:"<<sum<<endl;
    
}