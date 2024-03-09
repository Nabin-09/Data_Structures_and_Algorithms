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
void RightRotate(int arr[],int n ){
    int temp = arr[n-1];
    for(int i = n-1;i>=0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]= temp;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    RightRotate(arr,n);
    Printarray(arr,n);
    return 0;
}
