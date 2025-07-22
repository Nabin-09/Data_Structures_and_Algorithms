#include<iostream>

using namespace std;

int sumArr(int *arr , int size){
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int sum = arr[0]+sumArr(arr+1,size-1);
    return sum;

}


int main(){

    int arr[] = {5};
    int size = 1;
    cout << sumArr(arr , size);
    return 0;
}