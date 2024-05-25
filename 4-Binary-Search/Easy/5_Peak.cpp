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
int PeakElement(int arr[],int n){
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low = 1 , high = n-2;
    while(low<=high){
        int mid = (low + high)/2;
        if((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1]))
        return mid;
        else if (arr[mid]>arr[mid - 1])
        low = mid + 1;
        else 
        high = mid - 1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    cout<<"Peak element of th array : "<<PeakElement(arr,n)<<" ! "<<endl;
    return 0;
}
