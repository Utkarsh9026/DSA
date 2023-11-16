#include<iostream>
using namespace std;

int largestrowSum(int arr[][3],int row, int col){
    int maxi=INT32_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"The maximum sum along the row is:"<<maxi<<endl;
    return row;
}

int main(){
    int arr[3][3];
    cout<<"Inserting the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int ans=largestrowSum(arr,3,3);
    cout<<"The row Index is:"<<ans<<endl;
    return 0;
}