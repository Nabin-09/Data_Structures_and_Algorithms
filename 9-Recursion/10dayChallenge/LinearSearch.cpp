#include<iostream>

using namespace std;

bool LinearSearch(int *arr , int size , int k ){
    if(size == 0) return false;
    if(arr[0] == k) return true;

    else{
        bool rem = LinearSearch(arr+1, size-1 , k);
        return rem;
    }
}

int main(){
    int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 12};
    int size = 7;
    int key = 45;


    (LinearSearch(arr , size , key))? cout<<"FOUND" : cout <<"NOT FOUND";
}