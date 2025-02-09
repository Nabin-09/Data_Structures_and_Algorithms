// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size()>10){
            string ans= "";
            int num = s.size() - 2;
            ans = s[0]+to_string(num)+s[s.size()-1];
            cout<<ans<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}