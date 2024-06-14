#include<iostream>
using namespace std;
int Secondlargest(int arr[],int n){
    int slar = INT16_MIN;
    int lar = arr[0];
    for(int i = 0 ; i<n;i++){
    if(arr[i]<arr[i+1]){
        slar = lar;
        lar = arr[i];
    }
    else if(arr[i]<lar && arr[i]>slar)
    slar = arr[i];
    }
    return slar;
}
int main()
{
    int arr[] = {2,5,7,11,18};
    cout<<Secondlargest(arr,5);
    return 0;
}
