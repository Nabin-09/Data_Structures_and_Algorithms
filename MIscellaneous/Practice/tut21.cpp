#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

void solve(){
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int& i : a) cin>>i;
    sort(a.begin(), a.end());
    map<int,int> cnt;
    int mx = 0 ;
    for(int x : a){
        cnt[x]++;
        mx = max(mx,cnt[x]);
    }
    cout<<n-mx<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
