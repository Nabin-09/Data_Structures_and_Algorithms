#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i = 2;i<n;i++){
        if(n%i == 0)
        return false;
    }
    return true;
}
int main()
{
    int n ;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    if(isPrime(n))
    cout<<n<<" is Prime !"<<endl;
    else
    cout<<n<<" is not Prime ! "<<endl;
    return 0;
}
