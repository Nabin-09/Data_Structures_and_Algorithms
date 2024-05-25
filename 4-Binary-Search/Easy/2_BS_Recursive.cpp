#include<iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
    cout<<"The array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void TakeInput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "Enter the " << i + 1 << "st element of array: ";
            cin >> arr[i];
        }
        else if (i == 1)
        {
            cout << "Enter the " << i + 1 << "nd element of array: ";
            cin >> arr[i];
        }
         else if (i == 2)
        {
            cout << "Enter the " << i + 1 << "rd element of array: ";
            cin >> arr[i];
        }
         else 
        {
            cout << "Enter the " << i + 1 << "th element of array: ";
            cin >> arr[i];
        }
    }
}
int BinarySearch(int arr[],int n,int low,int high,int k){
    int mid = low + (high - low)/2;
    if(low>high){
        cout<<"NOT FOUND BHAI ! "<<endl;
        return -1;
    }
    else if(arr[mid] == k){
        return mid;
    }
    else if(k>arr[mid]){
        return BinarySearch(arr,n,mid+1,high,k);
    }
    else if(k<arr[mid]){
        return BinarySearch(arr,n,low,mid-1,k);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    int k;
    cout<<"Enter the number to be searched : ";
    cin>>k;
    int loc = BinarySearch(arr,n,0,n,k);
    if(loc>0){
    cout<<k<<" is at location : "<<loc+1;
    }
    return 0;
}
