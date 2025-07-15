# Heaps

Heap is a Data Structure that is a complete Binary tree and comes with Heap Order Property

## Complete Binary Tree 

Every level is completely filled (except last) and nodes always lean towards the left<br>
that is we must add a node from left first and only then in right 

## Max-Heap 

Value of child nodes are smaller than the parent

## Min-Heap

A node is always smaller than its children

## Insertion in a heap

We will implement using an array

                 60
                /  \
               50  40
              /  \
             30  20 

    arr = [X , 60 , 50 , 40 , 30 , 20] <br>

If we have node at ith posi , we will get its left child at 2i index and right child ar 2i+1<br>

Node = 60 (1st index) lchild= 50(2nd index) rchild = 40 (3rd index) <br>

Parent of a node = i/2 index <br>
parent of 40 = 3/2 = 1st index(60) <br>

### Steps to insert a value : 

 - Insert element at last index of array(eg 55)
 - Take it to its correct position
 - check if its parent is larger than the element
 - 55 is at 6th index , parent = (6/2) , 3rd index = 40<br>its smaller than 55 so swap
 - Repeat same until it reaches it position

 ```c++
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
};

int main(){


    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print(); //55 54 53 50 52 


    return 0;
}
```

T.C = O(logN)

## Deletion of root node 

            55 
           /  \
          54  53 
         /  \
        50   52

### Steps to delete node : 

  - Put the last node on the root node
      
           52 
          /  \ 
         54  53 
        /  \ 
        50  55

  - Remove last node
  - Propagate root node to its correct position
  - check with children and keep replacing
  
```c++
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
    
```

## Heapify Algorithm

Suppose we are given an array as input <br>
our task it to convert it into a heap.<br>

i/p : [54 , 53 , 55 , 52 , 50]

In a complete Binary Tree : <br>
leaf nodes lie from -  **((n/2) + 1) to nth index**<br>
We dont have a need to process leaf nodes as they are already in right place.

clearly so we have to operate from n/2 th index to 0th index to sort. <br>

```cpp

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

    int arr[6] = {-1 , 54 , 53 , 55 , 52 , 50}; 
    int n = 5;
    for(int i = n / 2 ; i > 0 ; i--){
        h.heapify(arr , n , i);
    }
```
## Heap Sort : 
 

         70 
        /  \ 
       60  55
      /  \
     45  50

we need to sort elements in here : 
arr = [X , 70 , 60 , 55 , 45 , 50]

clearly we can see the top element is largest in array : <br>

### <u>Algorithm : </u>

- swap a[1] with a[n]
- decrease size meaning remove 70 as a node arr= [50 , 60 , 55 , 45]
- bring root node to correct position
- now arr becomes [60 , 50 , 55 , 45] (brought root to correct posi)
- swap root with last element [45 , 50 , 55]
- repeat steps until all elements are removed


### Priority Queues

We can use min heaps and max heaps using priority queues .
<br> Include #include<queue> to use this stl.<br>

Declaration : <br>
```cpp
priority_queue<int> pq;

pq.push(4);
pq.push(5);
pq.push(6);
pq.push(8);

pq.top(); //gives element at top
pq.pop() ; //removes root
pq.size() // gives size
pq.empty() ; //returns true or false if pq is empty or not

priority_queue<int, vector<int> , greater<int>> minheap;

//this is syntax to create min heap and all the same functions work for it as well
```
