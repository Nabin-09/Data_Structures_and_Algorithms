//Rotating an element to the left by 1 Place
#include<iostream>
using namespace std;
void TakeInput(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
}
void Printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
void RotateLeft(int arr[],int n){
    int temp = arr[0];
    for(int i = 0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    RotateLeft(arr,n);
    Printarray(arr,n);
    return 0;
}
