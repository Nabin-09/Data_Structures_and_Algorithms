#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power(int base, int exp, ll n) {
    ll result = 1;
    for (int i = 0; i < exp; i++) {
        if (result > n / base) return n + 1;  // prevent overflow
        result *= base;
    }
    return result;
}

int main() {
    ll p, n;
    cin >> p >> n;

    ll low = 1, high = n;
    ll ans = -1;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll midPower = power(mid, p, n);

        if (midPower == n) {
            ans = mid;
            break; // Found exact match
        } else if (midPower > n) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
