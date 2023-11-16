#include<bits/stdc++.h>
using namespace std;

class Heap{

    public:
    int arr[101];
    int size;

    Heap(){
        size = 0;
    }

    void insertInHeap(int value){
        size = size+1;
        int index = size;
        arr[index] = value;

        while(index>1){
            int parentIndex = index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[parentIndex],arr[index]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }

    void deleteInHeap(){

        arr[1]=arr[size];
        size--;

        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;
            int largest = index;

            if(leftIndex<size && arr[largest]<arr[leftIndex]){
                largest = leftIndex;
            }

            if(rightIndex<size && arr[largest]<arr[rightIndex]){
                largest=rightIndex;
            }
            
            if(largest==index){
                break;
            }

            else{
                swap(arr[largest],arr[index]);
                index = largest;
            }
        }
    }
};

int main(){
    Heap h;

    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;

    h.insertInHeap(50);
    h.insertInHeap(30);
    h.insertInHeap(70);
    h.insertInHeap(40);
    h.insertInHeap(80);
    h.insertInHeap(100);

    cout << "printing the heap " << endl;
    for(int i=0; i<=h.size; i++) {
            cout << h.arr[i] << " ";
    }cout << endl;

    h.insertInHeap(110);
    cout << endl << "printing the heap " << endl;
    for(int i=0; i<=h.size; i++) {
            cout << h.arr[i] << " ";
    }cout << endl;
    
  return 0;
}