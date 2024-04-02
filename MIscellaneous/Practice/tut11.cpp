#include<iostream>
#include<array>
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
int subarray(int arr[],int n,int k){
    int len = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum = 0;
            for(int k = i;k<j;k++){
                sum += arr[k];
            }
            if(sum == k) len = max(len,j-i+1);
        }
    }
    return len;
}
int main()
{
    int n,k ;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    TakeInput(arr,n);
    cout<<"Enter the target of array : ";
    cin>>k;
    cout<<"Largest Subarray : "<<subarray(arr,n,k);
    return 0;
}
