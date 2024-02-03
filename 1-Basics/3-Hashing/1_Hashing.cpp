/*What is hashing?
 Ans : A hashing algorithm is used to convert an input (such as a string or integer) into a fixed-size output (referred to as a hash code or hash value). The data is then stored and retrieved using this hash value as an index in an array or hash table. The hash function must be deterministic, which guarantees that it will always yield the same result for a given input.*/
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the size of the array : >>"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : >>"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //Precompute
    int hash[13] = {0};
    for(int i = 0;i<n;i++){
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"Enter the number of queries : >>"<<endl;
    cin>>q;
    cout<<"Enter the queries : >>"<<endl;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout<<"The frequency of element in the array is >>"<<hash[number]<<endl;
    }
    return 0;
 }
 