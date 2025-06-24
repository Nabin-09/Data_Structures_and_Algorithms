#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll mid , ll p , ll n){
    ll res = 1;
    for(int i = 0 ; i < p ; i++){
        if(res > n / mid) return n + 1;
        res *= mid;
    }
    return res;
}

int main() {
    ll p , n;
    cin >> p >> n;
    ll low = 1 , high = n ;
    ll ans = -1;
    while(low <= high){
        ll mid = (low+high)/2;
        ll a = power(mid , p , n);
        if(a == n) {ans = mid; break;}
        else if(a > n) high = mid - 1;
        else low = mid + 1;
    }
    cout << ans << "\n";

    return 0;
}