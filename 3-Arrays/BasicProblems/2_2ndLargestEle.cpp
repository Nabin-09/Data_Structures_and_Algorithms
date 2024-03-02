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
int SecondLargestElement(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            slargest= largest;
            largest= arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;

}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    int slargest= SecondLargestElement(arr,n);
    cout<<"Second largest element of the array is : "<<slargest;
}
