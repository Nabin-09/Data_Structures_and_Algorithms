/*PAIR-
Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects.
PAIR container in defined under <utility> header file */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Explain_pair(){
    pair<int,int> p = {1,3};

    cout<<p.first<<"  "<<p.second<<endl;
    //OUTPUT : 1 3
    pair<int, pair<int,int>> q={1,{3,4}};

    cout<<q.first<<"  "<<q.second.first<<"  "<<q.second.second<<endl;
    //OUTPUT :  1 3 4
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};

    cout<< arr[1].second<<endl;
    //OUTPUT : 4
}
int main()
{
    Explain_pair();
    return 0;
}
