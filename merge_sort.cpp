#include<iostream>
using namespace std;

void merge(int A[],int l,int m,int h)
{
    int n1=(m-l+1);
    int n2=(h-m);
    int C[n1],D[n2];
    for(int i=0;i<n1;i++)
    {
        C[i]=A[l+i];
        
    }
    for(int i=0;i<n2;i++)
    {
        D[i]=A[m+1+i];
    }
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2)
    {
        if(C[i]<=D[j])
        {
            A[k]=C[i];
            i++;
            k++;
        }
        else
        {
            A[k]=D[j];
            j++;
            k++;
        }
    }
    
    while(i<n1)
    {
        A[k]=C[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=D[j];
        j++;
        k++;
    }
    
}

void mergeSort(int A[],int l, int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergeSort(A,l,m);
        mergeSort(A,m+1,r);
        merge(A,l,m,r);
    }
}

void printArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int A[5]={2,4,3,6,8};
    cout<<"Give array is:"<<endl;
    printArray(A,5);
    cout<<"Array after sorting is :"<<endl;
    mergeSort(A,0,4); 
    printArray(A,5);
}