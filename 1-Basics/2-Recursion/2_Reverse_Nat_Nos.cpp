#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse_Natural_Numbers(int i,int n){
    if(i<1)
    return ;
    cout<<i<<endl;
    Reverse_Natural_Numbers(i-1,n);
}
int main()
{
    int n;
    cout<<"Enter the last digit of desired series  : "<<endl;
    cin>>n;
    cout<<"The Desired Series is : >>> "<<endl;
    Reverse_Natural_Numbers(n,n);
    return 0;
}
/*OUTPUT : 
Enter the last digit of desired series  : 
5
The Desired Series is : >>> 
5
4
3
2   */ 