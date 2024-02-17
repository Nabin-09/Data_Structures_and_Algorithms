#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : "<<endl;//taking the array input
        cin>>arr[i];
    }
    //Printing the array
    cout<<"The array : "<<endl;
    for(int i = 0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //precompute
    int hash[15]={0};//Hence we get frequencies of element 0-14 in array.
    for(int i =0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"Enter the number of queries : "<<endl;//Number of queries intaken.
    cin>>q;
    while(q--){
        int number;//fetch
        cout<<"Enter the queries : "<<endl;
        cin>>number;
        cout<<"The number of times "<<number<<" appeared is "<<hash[number]<<endl;
    }

    return 0;
}
