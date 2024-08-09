#include<iostream>
using namespace std;
int ConvertBinaryToDecimal(string s){
    int len = s.length();
    int p2 = 1 , num = 0 ;
    for(int i = len-1 ;  i>=0 ; i--){
        if(s[i] == '1'){
             num = num + p2;
        }
        p2 = p2*2;
    }
    return num;
}
int main()
{
    string s;
    cin>>s;
    cout<<ConvertBinaryToDecimal(s);
    return 0;
}
