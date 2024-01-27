#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int Count_Digits(int n){
    int digits;
    digits = (log10(n)) + 1;
    return digits;
}
bool Armstrong(long int n){
    long int duplicate = n;
    long int Armstrong=0;
    int lastDigit;
    int power = Count_Digits(n);
    while(n>0){
        lastDigit = n % 10;
        Armstrong = Armstrong  + pow(lastDigit,power);
        n = n / 10;
    }
    if(duplicate==Armstrong)
    return true;
    else
    return false;
}
int main()
{
    long int n;
    bool armstrong;
    cout<<"Enter the number : >> "<<endl;
    cin>>n;
    armstrong = Armstrong(n);
    cout<<"The number "<<n<<" is Armstrong number :>> "<<armstrong; 
    return 0;
}
