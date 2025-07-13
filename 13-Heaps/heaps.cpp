#include<bits/stdc++.h>

using namespace std;

class heap{
    public :
    int arr[100];
    int size ;

    heap(){
        arr[0] = -1;
        size = 0 ;
    }

    void insert(int val){

        size = size+1;
        int index = size;
        arr[index] = val;
        
        while(index > 1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }else{
                return ;
            }
        }

    }

    void print(){
        for(int i = 1 ; i <= size ; i++){
            cout << arr[i] <<" ";
        }
    }

    void deleteFromHeap(){
        if(size == 0) cout<<"Nothing to delete";
        return;
        
        //Put last element into last element
        arr[1] = arr[size];
        size--;

        //take root node to its correct postion
        int i = 1;
        while(i < size){
            int leftI = 2 * i ;
            int rightI = 2* i+1;
            if(leftI< size && arr[i] < arr[leftI]){
                swap(arr[i] , arr[leftI]);
                i = leftI;
            }
            else if(rightI < size && arr[i] < arr[rightI]){
                swap(arr[i] , arr[rightI]);
                i = rightI;
            }
            else{
                return ;
            }
        }
    }
    

    void heapify(int arr[] , int n , int i ){
        int largest = i ;
        int left = 2*i;
        int right = 2*i + 1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){ //check if largest has been updated or not 

            swap(arr[largest] , arr[i]);
            heapify(arr , n , largest);

        }
    }

};

int main(){


    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print(); //55 54 53 50 52 

    h.deleteFromHeap();


    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50}; 
    int n = 5;
    for(int i = n / 2 ; i > 0 ; i--){
        h.heapify(arr , n , i);
    }



    return 0;
}