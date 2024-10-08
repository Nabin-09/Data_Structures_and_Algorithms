#include<bits/stdc++.h>
using namespace std;

#define pyes cout << "YES\n" ;
#define pno cout << "NO\n" ;
#define br cout << "\n" ;
#define ff first 
#define ss second
#define pb push_back
#define ppb pop_back
#define MOD 998244353
#define mod 1000000007
#define inf 9223372036854775807
#define all(x) (x).begin(),(x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

ll power(ll n,ll pow) {
    if (pow == 0) return 1;  
    if (pow == 1) return n;  
    ll temp = power(n, pow / 2);
    temp = temp * temp;  
    if (pow % 2 == 0) {
        return temp;  
    } else {
        return temp * n; 
    }
}
int main() {
    ll n , r;
    cin >> n >> r;
    cout << power(n , r);
    return 0;
}