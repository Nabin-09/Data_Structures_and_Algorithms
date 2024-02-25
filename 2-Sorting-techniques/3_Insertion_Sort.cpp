/*INSERTION SORT
UNSORTED ARRAY : 14 9 15 12 6 8 13 
takes an element and places it in correct place
we start with 1st element 14
then we compare with arr[0-1] therefore,sorted array: 9 14
now we check for arr[0-2] we sort it and now the array is 9 14 15
now for arr[0-3] and hence the array is now 9 12 14 15
similar iterations happen and then we get the sorted array*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int j = 1;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main()
{
    int n ;
    cout<<"Enter the number of elements  : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<= n;i++){
        cin>>arr[i];
    }
    Insertion_sort(arr,n);
    
    return 0;
}
