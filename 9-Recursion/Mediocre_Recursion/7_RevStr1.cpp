#include <bits/stdc++.h>
using namespace std;
void solve(string s , int idx){
    if(idx >= s.size()){
        return;
    }
    solve(s, idx+1);
    cout<<s[idx];
}
int main() {
    string s;
    cin >> s;
    solve(s,0);
    return 0;
}