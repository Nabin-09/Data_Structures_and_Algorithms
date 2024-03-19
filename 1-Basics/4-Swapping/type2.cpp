#include<iostream>
using namespace std;
void swap(int &a,int &b){
    if (a == 0) {
        b = a;
        a= 0;
    }
    else if (a == 0) {
        a = b;
        b = 0;
    }
    else {
        a = a * b;
        b = a / b;
        a = a / b; 
    }
}
int main()
{
    int a , b;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swap : "<<a<<" "<<b<<endl;
    return 0;
}
