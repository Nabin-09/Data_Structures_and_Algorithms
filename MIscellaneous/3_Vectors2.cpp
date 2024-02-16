//More Member functions of cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> v){
     for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
}
void Explain_Vectors(){
    vector<int> v{2,4,5,8,10,13,56,78};
    print_vec(v);
    /*Why is there no need to declare "it"?
    ANS: The auto keyword is telling the compiler to deduce the type of it from the type of the elements in the vector v. In this case, since v is a std::vector<int>, it will be of type int, as it iterates over the elements of the vector. */

    //Method Functions - 

    //Erase
    v.erase(v.begin()+1);//deletes element at the specific location we can also use v.erase(it+1);
    v.erase(v.begin()+4,v.begin()+7);//deletes from start to end of it.(deletes v[4],v[5])
    print_vec(v);
    //OUTPUT : 
    /* 2 4 5 8 10 13 56 78
       2 5 8 10           */
    //Insert
    v.insert(v.begin(),300);//inserts 300 right at the beginning.
    v.insert(v.begin() + 2,2,42);//Inserts two 42 in vector at 2nd and 3rd index.
    print_vec(v);
    //OUTPUT : 300 2 42 42 5 8 10
    cout<<v.size()<<" "<<endl;//7
    v.pop_back();//removes last element.
    print_vec(v);//300 2 42 42 5 8
    vector<int> v1 = {3,5,6};
    vector<int> v2 = {8,9,13};
    v1.swap(v2);//swaps values of vectors
    print_vec(v1);print_vec(v2);// 8 9 13 ; 3 5 6
    v1.clear();//empties the vector
}
int main()
{
    Explain_Vectors();
    return 0;
}
