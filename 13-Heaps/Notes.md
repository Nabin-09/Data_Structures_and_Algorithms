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


