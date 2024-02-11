#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(int arr[],int n){
    for(int i = 0;i<=n-2;i++){
        int min = i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min])
            min = j;
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
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
    Selection_Sort(arr,n);
    cout<<"The Sorted array is : "<<endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
