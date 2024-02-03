#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int divisors(int n){
    vector<int> ls;
    int c = 0;
    for(int i = 1;i*i<n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n%i)!=1)
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    cout<<"The factors of of "<<n<<"are as follows: >>"<<endl;
    for(auto it:ls)cout<<it<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number to find its factors/Divisors : >> "<<endl;
    cin>>n;
    divisors(n);
    return 0;
}
