#include <bits/stdc++.h>
using namespace std;
void swapi(int &a , int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
void reverse(vector<int> &arr ,int l , int r){
    if(l >= r) return;
    swapi(arr[l],arr[r]);
    reverse( arr , l+1 , r-1);
}
int main() {
    int n;
    cout<<"Enter the size of an array ! : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements : "<<endl;
    for(int &num : arr){
        cin >> num;
    }
    reverse(arr,0,n-1);
    for(int num : arr){cout<<num<<" ";}
    return 0;
}