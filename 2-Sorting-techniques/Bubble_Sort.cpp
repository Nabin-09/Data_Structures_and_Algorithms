/*
UNSORTED ARRAY : 13 46 20 52 24 
in bubble we compare adjacent numbers and if the number at smaller index is larger than that 
in the bigger index then we swap
1st iteration : 13 46 -> 13 20 46 -> 13 20 46 24 52 -> 13 20 46 24 52 (Hence , we have the largest number at last index.) 
2nd iteration : 13 20 24 46 52(runs until {n-1}th index)
3rd iteration : 13 20 24 46 52(runs until {n-2}th index)
4rd iteration : 13 20 24 46 52(runs until {n-3}th index)
4rd iteration : 13 20 24 46 52(runs until {n-4}th index)*/
#include<iostream>
#include<bits/stdc++.h>
void Bubble_Sort(int arr[],int n){
    int temp;
    for (int i = n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
              if(arr[j]>arr[j+1]){
              temp = arr[j+1];
              arr[j+1] = arr[j];
              arr[j]= temp;
              }  
        }
    }
}
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    Bubble_Sort(arr,n);
    cout<<"The Sorted array is : "<<endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
