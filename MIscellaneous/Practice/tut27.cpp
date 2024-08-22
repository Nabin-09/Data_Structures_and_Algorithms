//E1 CODE
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,p,mem[4][501][501];
int sum1(int n,int k);
int dfs1(int n,int k);
int sum2(int n,int k);
int dfs2(int n,int k);
int sum1(int n,int k) {
    if(k==-1) return 0;
    if(mem[0][n][k]!=-1) return mem[0][n][k];
    return mem[0][n][k]=(sum1(n,k-1)+dfs1(n,k))%p;
}
int dfs1(int n,int k) {
    if(n==1||k==0) return 1;
    if(mem[1][n][k]!=-1) return mem[1][n][k];
    int s=0;
    for(int i=0;i<=k;++i) {
        s=(s+dfs1(n-1,i)*sum2(n-1,min(k-i,i-1)))%p;
        if(i+1<=k-i) s=(s+dfs2(n-1,i)*(sum1(n-1,k-i)-sum1(n-1,i)+p))%p;
    }
    return mem[1][n][k]=s;
}
int sum2(int n,int k) {
    if(k==-1) return 0;
    if(mem[2][n][k]!=-1) return mem[2][n][k];
    return mem[2][n][k]=(sum2(n,k-1)+dfs2(n,k))%p;
}
int dfs2(int n,int k) {
    if(n==1||k==0) return 1;
    if(mem[3][n][k]!=-1) return mem[3][n][k];
    int s=0;
    for(int i=0;i<=k;++i)
        s=(s+dfs2(n-1,i)*sum2(n-1,k-i))%p;
    return mem[3][n][k]=s;
}
void solve() {
    cin >> n >> k >> p;
    for(int i=0;i<=n;++i)
        for(int j=0;j<=k;++j)
            for(int l=0;l<=3;++l) mem[l][i][j]=-1;
    cout << dfs1(n,k) << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(0);
    int T=1;cin >> T;while(T--) solve();
}