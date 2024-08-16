//Check if a number is a power of two
#include<iostream>
using namespace std;
int main()
{
    /*
    LOGIC :
     IF a number is a power of 2 , it will have only one set bit
     but using the previous logic if n & (n-1) == 0 , its a power of 2*/
     int n;
     cin>>n;
     if(n == 0) cout<<"NO"<<endl;
     if((n & (n-1)) == 0)
     cout<<"YES\n";
     else cout<<"NO\n";
    return 0;
}
