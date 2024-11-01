#include<bits/stdc++.h>

using namespace std;

void MaxMin(vector<int> arr){
    int smallest = arr[0] , largest = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i]>= largest) largest = arr[i];
        else if(arr[i]<= smallest) smallest = arr[i];
    }
    cout<<largest<<"  "<<smallest;
}

int main(){
    vector<int> arr = { 34 , 67 , 9  , 343 , 90 , 67 , 2 , 546 , 78};
    MaxMin(arr);
    return 0;
}