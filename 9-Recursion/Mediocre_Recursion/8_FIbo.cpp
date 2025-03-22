#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==1){
      return 1;
    }
    else if(n == 0){
        return 0;
    }
    else{
        return n*fibonacci(n-1);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}