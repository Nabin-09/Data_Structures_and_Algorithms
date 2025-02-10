#include <bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n){
    vector<bool> prime(n+1,true);
    for(int i = 2 ; i*i < n ;i++){
        if(prime[i] == true){
            for(int j = i*i ; j <= n ; j+= i){
                prime[j] = false;
            }
        }
    }
    for(int p = 2 ; p < n+1 ;p++){
        if(prime[p]) cout<<p<<" ";
    }
}
int main() {
    int n ; 
    cin >> n;
    SieveOfEratosthenes(n);
    return 0;
}   