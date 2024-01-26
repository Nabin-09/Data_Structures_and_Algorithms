#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Reverse_number(long int n){
    long int RevNo=0,newn;
    newn = n;
    int lastDigit;
    while(n>0){
        lastDigit = n % 10;
        n = n / 10;
        RevNo = (RevNo * 10) + lastDigit;
    }
    if(RevNo==newn)
    return true;
    else
    return false;
}
int main(){
    long int n;
    bool pal;
    cout<<"Enter the number : >> "<<endl;
    cin>>n;
    pal = Reverse_number(n);
    cout<<"The status if the number "<<n<<" is  palindrome: << "<<pal<<endl;/* 1 is True
                                                                              0 is False :) */
    return 0;
}