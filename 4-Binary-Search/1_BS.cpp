//Shows the basic algorithm of Binary Search
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
int BinarySearch(int arr[],int n, int k){
    int low = 0,high = n-1;
    int mid = low + (high - low) / 2;
    while(low<=high){
    if(arr[mid] == k){
        return mid+1;
    }
    else if(arr[mid]>k){
        high = mid - 1;
    }
    else
    low = mid+1;
    }
    cout<<"Element nto found "<<endl;
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
    int loc = BinarySearch(arr,n,k);
    cout<<k<<" is at location : "<<loc;
    return 0;
}
