#include<bits/stdc++.h>

using namespace std;

class MinHeap{
    private:
        int size;
        int capacity;
        int *arr;
    
    MinHeap(int c){
        size = 0;
        capacity = c;
        arr = new int[c];
    }

    int left(int i){
        return (2*i + 1);
    }

    int right(int i){
        return (2*i + 2);
    }

    int parent(int i){
        return (i-1)/2;
    }

    void insert_given_element(int x){
        if(size==capacity){
            return;
        }
        size++;
        arr[size-1] = x;

        for(int i = size-1; i>0; i = parent(i)){
            if(arr[parent(i)]>arr[i]){
                swap(arr[parent(i)], arr[i]);
            }else{
                break;
            }
        }
    }

    void minHeapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(l<size && arr[l]<arr[smallest]){
            smallest = l;
        }
        if(r<size && arr[r]<arr[smallest]){
            smallest = r;
        }
        if(smallest!=i){
            swap(arr[smallest], arr[i]);
            minHeapify(smallest);
        }
    }

    void decreaseKey(int i, int val){
        arr[i] = val;

        for(int j=i; j>0;j = parent(j)){
            if(arr[parent(j)]>arr[j]){
                swap(arr[parent(j)], arr[i]);
            }else{
                break;
            }
        }
    }

    int extractMin(){
        if(size==0){
            return INT_MAX;
        }
        if(size==1){
            size--;
            return arr[size];
        }

        swap(arr[0], arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }

    void delete_given_element(int i){
        decreaseKey(i, INT_MIN);
        extractMin();
    }

    void buildHeap(){
        for(int i= (size-2)/2; i>=0;i--){
            minHeapify(i);
        }
    }
};