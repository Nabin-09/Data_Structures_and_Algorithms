#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Before : "<<a<<" "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"AFTER : "<<a<<" "<<b<<endl;
    return 0;
}
