// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";
    string soln = "";
    for(int i = 0 ; i <s.size() ; i+=2){
        ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0 ; i < ans.size();i++){
        if(i == ans.size()-1) {cout<<ans[i]; break;} 
        cout<<ans[i]<<'+';
    }
    //s.back() will return the last character , you can use it that appraoch as well.
    
    return 0;
}