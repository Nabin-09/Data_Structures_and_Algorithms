#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long int Reverse_number(long int n){
    long int RevNo=0;
    int lastDigit;
    while(n>0){
        lastDigit = n % 10;
        n = n / 10;
        RevNo = (RevNo * 10) + lastDigit;
    }
    return RevNo;
}
int main(){
    long int n,Reverse_Number;
    cout<<"Enter the number : >> "<<endl;
    cin>>n;
    Reverse_Number = Reverse_number(n);
    cout<<"Reverse of the number : "<<n<<" is : << "<<Reverse_Number<<endl;
    return 0;
}