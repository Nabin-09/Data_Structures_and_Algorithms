#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    int t ;
     cin>> t;
     while (t--)
     {
        int n  , m , k;
        cin >> n >> m >> k;
        string s ;
        cin>>s;
        s= 'L' + s;
        s+= 'L';
        int dp[n+2];
        for(int i = 1 ; i<n+2;i++){
            dp[i] = 1e9;
        }
        dp[0] = 0 ;
        for(int i = 1 ; i<n+2 ; i++){
            if(s[i] == 'C') continue;
            if(s[i] == 'W'){
                for(int j = max(0, i-m);j<i;j++){
                    if(s[j] == 'C' || (j< i-1&& s[j] == 'W')) continue;
                    else{
                        dp[i] = min(dp[i] , dp[j] + 1);
                    }
                }
            }
            else{
                for(int j = max(0, i - m ); j<i ; j++){
                    if(s[j] == 'C' || (j< i - 1 &&s[j] == 'W')) continue;
                    else{
                        dp[i] = min(dp[i] , dp[j]);
                    }
                }
            }
        }
        cout<<(dp[n+1]<= k ? "YES\n" : "NO\n");
     }
     
    return 0;
}
