/*VECTORS : 
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Explain_Vectors(){
    vector<int> v; //creates an empty dynamic array.
    v.push_back(1);
    //Insert a value int(1) at the end of array.
    v.emplace_back(2);
    //Similar to push_back but read back why emplace_back is faster than vector.
    vector<pair<int,int>> vec;
    //defining vector of pair data type.

    vec.push_back({1,2});

    vec.emplace_back(1,2);
    //difference is syntax of pushing values in pair of vector data type.
    
}
int main()
{
    
    return 0;
}
