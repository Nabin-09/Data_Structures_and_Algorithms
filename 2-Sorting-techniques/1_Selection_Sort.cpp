#include<iostream>
#include<bits/stdc++.h>
/*
USORTED ARRAY : 5 4 13 8 9
1st iteration : the smallest element is swapped with Oth index
                4 5 13 8 9
2nd iteration : 2nd smallest number is placed at 1st index
                4 5 13 8 9
3rd iteration : 4 5 8 13 9
4th iteration : 4 5 8 9 13
hence we need (n-1) iteration to sort an array of n elements*/
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
