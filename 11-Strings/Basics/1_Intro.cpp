#include<bits/stdc++.h>
using namespace std;

#define int long long 

const int MOD = 10e7 +7;
const int INF = LLONG_MAX >> 1;

signed main(){
    string s = "abcde";//set of characters , the one on left is string and on left is string literal
    //string literals = set of charcters but cant be edit
    auto i = 123.89;//gives data types by self to the variable
    s[1] = 'z';//we can change the characters at index but cant do s[1] = "Fe"  
    //Why string is used over vector?
    //vector<char> = {a , b ,c } cout<<v throws error
    cout<<s<<endl;//works , we can push back , reverse convert t UpCase and LoCase , and many more functions
    //the '+' operator concats strings
    //s.begin() return the index 0 and s.end() return the index after the last element
    reverse(s.begin() , s.end());//s.end() points outside the array
    cout<<s<<endl;//returns edcza 

}