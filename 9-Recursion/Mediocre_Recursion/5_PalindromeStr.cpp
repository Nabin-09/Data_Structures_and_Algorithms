#include <bits/stdc++.h>
using namespace std;
bool Palin(string s ,int i, int j){
    if(j<i) return true;
    if(s[i]!=s[j]) return false;
    return Palin(s ,i+1 , j-1);
}
int main() {
    string str;
    cin >> str;
    cout << (Palin(str, 0, str.size() - 1) ? "YES" : "NO") << endl;
    return 0;
}