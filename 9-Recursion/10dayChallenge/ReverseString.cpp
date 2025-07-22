#include<iostream>

using namespace std;

void reverse(string& s , int i ){
    int j = s.size() - i - 1;
    if(i >= j) return;
    swap(s[i] , s[j]);

    reverse(s , i+1);
}

int main(){
    string s;
    cin >> s;

    reverse(s , 0 );
    cout << s << endl;

}