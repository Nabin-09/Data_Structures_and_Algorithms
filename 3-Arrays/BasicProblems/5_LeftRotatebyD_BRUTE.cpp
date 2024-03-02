#include<iostream>
#include<bits/stdc++.h>
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
void leftRotate(int arr[],int n,int d){
    d = d%n;
    int temp[d];
    for(int i = 0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i = d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]= temp[i-(n-d)];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int d;
    cout<<"Enter the index about which array is to be rotated : ";
    cin>>d;
    int arr[n];
    TakeInput(arr,n);
    leftRotate(arr,n,d);
    PrintArray(arr,n);
    return 0;
}
