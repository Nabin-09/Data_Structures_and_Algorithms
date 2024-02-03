#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Natural_Numbers(int i,int n){
    if(i>n)
    return ;
    if(i<=n)
    cout<<i<<endl;
    Natural_Numbers(i+1,n);
}
int main()
{
    int i=1,n;
    cout<<"Enter the last digit of desired series  : "<<endl;
    cin>>n;
    cout<<"The Desired Series is : >>> "<<endl;
    Natural_Numbers(i,n);
    return 0;
}
