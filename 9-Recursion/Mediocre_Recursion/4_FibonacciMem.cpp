#include <bits/stdc++.h>
using namespace std;
vector<int> dp(10000,-1);
int fibonacci(int n ){
   
    if(n==1){
        return 1;
    }
    else if(n==0) return 0;
    else if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n ;
    cin >> n;
    cout<<fibonacci(n);
    return 0;
}