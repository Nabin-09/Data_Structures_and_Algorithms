#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p = t+1;
    while(p--){
        string s;
        getline(cin,s);
        int n = s.length();
        if(n>10){
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
        else
        cout<<s<<endl;
    }
    return 0;
}
