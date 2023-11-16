#include<iostream>
using namespace std;

// void selectionSort(int A[],int n)
// {
//     int temp[n];
//     for(int i=0;i<n;i++)
//     {
//         int min_ind=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(A[j]<A[min_ind])
//             {
//                 j=min_ind;
//             }
//         }
//         temp[i]=A[min_ind];
//         A[min_ind]=0;
//     }
//     for(int i=0;i<n;i++)
//     {
//         A[i]=temp[i];
//     }
// }

void selectionSort(int A[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[min_ind]>A[j])
            {
                min_ind=j;
            }
        }
        int temp=A[i];
        A[i]=A[min_ind];
        A[min_ind]=temp;
    }
}

// void swap(int a,int b)
// {
//    int temp=a;
//    a=b;
//    b=temp;
// }

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
   int A[]={4,3,2,1};
   selectionSort(A,4);
   printArray(A,4);
   return 0;
}