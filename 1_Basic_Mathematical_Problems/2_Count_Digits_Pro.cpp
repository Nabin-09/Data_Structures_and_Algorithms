#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Count_Digits(int n){
    int digits;
    digits = (log10(n)) + 1;
    return digits;
}
int main(){
    long int n,digits;
    cout<<"Enter the number : >> "<<endl;
    cin>>n;
    digits=Count_Digits(n);
    cout<<"Number of Digits : in "<<n<<" are : << "<<digits<<endl;
    return 0;
}