#include<bits/stdc++.h>
using namespace std;

class heap {
    public:

    int arr[100];
    int size = 0;

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deletefromHeap(){
        if(size == 0){
            cout<<"Heap is empty";
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }

        }
    }
};

void heapify(int arr[], int size, int i){
    int largest = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;

    if(leftIndex <= size && arr[largest] < arr[leftIndex]){
        largest = leftIndex;
    }
    if(rightIndex <= size && arr[largest] < arr[rightIndex]){
        largest = rightIndex;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}

void heapSort(int arr[], int n){
    int size= n;
    while (size > 1)
    {
        swap(arr[size],arr[1]);
        n--;
        heapify(arr,size,1);
    }
    
}

int main(){
    heap h;
    // h.insert(12);
    // h.insert(32);
    // h.insert(22);
    // h.insert(1);
    // h.insert(16);
    // h.print();
    // cout<<endl;
    // h.deletefromHeap();
    // h.print();
    // cout<<endl;
    // h.deletefromHeap();
    // h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 6;
    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"Array After Heapify"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }

    heapSort(arr,n);
    cout<<"Array After Heapify Sort"<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}