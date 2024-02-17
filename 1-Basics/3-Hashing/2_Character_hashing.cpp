#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void character_hashing(string s,int q){
    //premcompute
    int hash[256] = {0};//we have only 256 characters
    for(int i = 0; i< s.size();i++){
        hash[s[i]]++;
    }
    while(q--){
        cout<<"Enter the characters : ";
        char c;
        cin >> c;
        cout<<"The frequency of character : "<<hash[c]<<endl;
    }
}
int main()
{
    string s;
    int q;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"Enter the number of queries : ";
    cin>>q;
    character_hashing(s,q);
    return 0;
}
