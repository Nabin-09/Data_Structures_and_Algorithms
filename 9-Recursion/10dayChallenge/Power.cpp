#include<iostream>

using namespace std;

long long power(int a , int b){
    if(b == 0) return 1;
    if( b == 1) return a;

    long long ans = power(a, b/2);

    if(!(b&1)){
        return ans * ans;
    }else{
        return a * ans * ans;
    }
}

int main(){
    int a , b ;
    cin >> a >> b;

    cout << power(a , b);
}