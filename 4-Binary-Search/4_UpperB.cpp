#include<iostream>
using namespace std;
int UpperB(int arr[],int n,int k){
    int low = 0,high = n-1;
    int mid = low + ((high - low)/2);
    int ans;
    while(low<=high){
        mid = low + ((high - low)/2);
        if(arr[mid]>k){
            ans = mid;
            high = mid - 1;
        }
        else 
         low = mid  + 1;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element whos Upper bound is needeed : ";
    int k;
    cin>>k;
    cout<<"Upper bound : "<<UpperB(arr,n,k)+1;
    return 0;
}
;