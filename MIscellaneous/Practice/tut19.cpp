#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    int posi = 0;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i]!=0){
            arr[posi] = arr[i];
            posi++;
        }
    }
      for(int j = posi ; j<n ; j++){
            arr[j] = 0 ;
        }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
