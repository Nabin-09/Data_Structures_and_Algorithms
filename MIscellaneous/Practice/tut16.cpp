//Binary Search.
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;//No Overflow
        if(arr[mid] == target) return mid;
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else
        low = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array(SORTED) : "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter target : "<<endl;
    cin>>k;
    int ind = binarySearch(arr,n,k);
    if(ind == -1)
    cout<<"Element not found : !!"<<endl;
    else
    cout<<"Elements found at index "<<ind+1<<" !"<<endl;
    return 0;
}
