#include<iostream>

using namespace std;

bool BinarySearch(int* arr , int s , int e , int k ){
    if(s > e) return false;
    int mid = s+(e-s)/2;
    if(arr[mid] == k) return true;
    if(arr[mid]<k){
        return BinarySearch(arr , mid+1 , e, k);
    }else{
        return BinarySearch(arr , s , mid-1 , k);
    }
}


int main(){

    int arr[7] = {1 , 2 , 5 ,13 , 65 , 82 , 101};
    int size = 7;
    int key = 13;
    BinarySearch(arr , 0 , 6 ,key)?cout<<"FOUND":cout<<"NOT FOUND";
    return 0;
}