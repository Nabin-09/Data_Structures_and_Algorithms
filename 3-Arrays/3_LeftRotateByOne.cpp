#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void PrintArray(int arr[], int n)
{
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
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    cout<<"THE ARRAY AFTER BEING ROTATED BY 1 PLACE TO THE LEFT "<<endl;
    int temp=arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    PrintArray(arr,n);
    return 0;
}
