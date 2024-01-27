#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long int count_digits(long int n){ //n is input
    long int last_digit;
    int count = 0;
    while(n>0){
        last_digit= n % 10; 
        n = n / 10; 
        count++; 
    }
    return count;
}
int main(){
    long int n,digits;
    cout<<"Enter the number : >> "<<endl;
    cin>>n;
    digits=count_digits(n);
    cout<<"Number of Digits : in "<<n<<" are : << "<<digits<<endl;
}