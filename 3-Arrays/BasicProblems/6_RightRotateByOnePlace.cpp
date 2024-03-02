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
void RightRotate(int arr[],int n){
    int temp = arr[n-1];
    for(int i = n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    RightRotate(arr,n);
    PrintArray(arr,n);
    return 0;
}
