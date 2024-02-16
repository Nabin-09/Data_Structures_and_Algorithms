/*VECTORS : 
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Explain_Vectors(){
    //1.BASICS
    vector<int> v; //creates an empty dynamic array.
    v.push_back(1);
    v.push_back(5);
    //Insert a value int(1) at the end of array.
    v.emplace_back(2);
    //Similar to push_back but read back why emplace_back is faster than vector.
    vector<pair<int,int>> vec;
    //defining vector of pair data type.
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    //difference is syntax of pushing values in pair of vector data type.

    //2.INITIALISATION
    vector<int> v1{5,100};// container v1 has 100,100,100,100,100 as its values.
    vector<int> v3(5);//container that has 5 empty slots in it.
    vector<int> v2(v1);//values of v2 are copied in v1.
    cout<<v2[0]<<" or "<<v2.at(1)<<endl;//two ways of accessing elements of vector later one isn't recommended!

    //3.ITERATORS
    /*iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program*/
    vector<int>::iterator it1 = v.begin();//v.begin() is pointing at memory of first element of v and it1 has its address.
    it1++;//going to next contagious address likeiwse it1 = it + 2 will see the 3rd element of vector.
    cout<< *(it1)<<" "<<endl;
    //Printing the vectors :
    for(vector<int>::iterator it1 = v.begin(); it1 != v.end();it1++){
        cout<<*(it1)<<" ";
    }
    cout<<endl;
    //Shortcut for syntax || using *auto* automatically defines data type of vector.
    for(auto it1 = v.begin(); it1!= v.end();it1++){
        cout<<*(it1)<<" ";
    }
    cout<<endl;
    //Shorcut to print the whole vector
    for(auto it1 : v){
        cout<<it1<<" ";
    }
    cout<<endl;
}
int main()
{
    Explain_Vectors();
    return 0;
}
