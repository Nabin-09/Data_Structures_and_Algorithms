#include<iostream>

using namespace std;

bool palindromeString(string& s , int i){
    int j = s.size() - i - 1;
    if(i >= j) return true;

    if(s[i] != s[j]) return false;

    palindromeString(s , i+1);
}

int main(){
    string s;
    cin >> s;
    palindromeString(s , 0)?cout<<"Pal" : cout<<"Not Pal";
    return 0;
}