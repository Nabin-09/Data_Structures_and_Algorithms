#include <bits/stdc++.h>
using namespace std;
string reverse(string s , int i = 0  ){
    int j = s.size() -1 - i;
    if(j <= i){
        return s;
    }
    else{
        swap(s[i] , s[j]);
         return reverse(s ,i+1);
    }
}
int main() {
    string s;
    cin >> s;
    cout<<reverse(s , 0);
    return 0;
}