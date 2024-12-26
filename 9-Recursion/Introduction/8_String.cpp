#include <bits/stdc++.h>
using namespace std;
void Reverse_String(string &s , int i , int len){
    if(i >= len/2){return;}
    swap(s[i], s[len-i-1]);
    Reverse_String(s , i+1 , len);
}
int main() {
    string s;
    cin >> s;
    int len = s.length();
    Reverse_String(s,0,len);
    cout<<s<<endl;
    return 0;
}