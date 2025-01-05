//Aim is to reverse a string
#include<bits/stdc++.h>

using namespace std;

void solve(string str , int idx=0){
    if(idx >= str.length()){
        return;
    }
    solve(str , idx+1);
    cout<<str[idx];
}
int main(){
    string s;
    cin >> s;
    solve(s,0);
}