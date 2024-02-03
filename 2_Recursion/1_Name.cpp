#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Printing_Names(int i,int n){
    if(i>n)
    return ;
    cout<<"Nabin"<<endl;
    Printing_Names(i+1,n);
}
int main()
{
    int n;
    cout<<"Enter the number of times you want the names to be printed : >> "<<endl;
    cin>>n;
    Printing_Names(1,n);
    return 0;
}
