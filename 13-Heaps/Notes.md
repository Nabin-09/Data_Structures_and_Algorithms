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
  


